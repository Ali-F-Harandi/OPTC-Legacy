#!/usr/bin/env python3
"""M3b: the bisque *sinatra* cipher family — clean-room re-implementation.

Reversed from the restored 0x9d engine image (see notes/m3b-plt-rtti-cipher.md):

  * RC4 PRGA                      @0x39d3800  (verbatim standard)
  * custom-seeded KSA             inside key-expansion 0x39d3a30 (mode 0xE0000000)
    S0 = 256-byte permutation table @0x14f7375 (NOT the identity)
  * custom-AES(-192-shaped) key expansion @0x39d3a30
    SubWord = T1∘T2, Rcon = T1[T3[adj + T1[T4[r]]]] (adj = 0x19 / -0xE6)
    tables T1@0x14f7375 T2@0x14f7475 T3@0x14f7575 T4@0x14f7675
  * framing: BQ15916StreamDecoder40S = 255-byte frames, re-seed on seek

Embedded key material (game .rodata):
  vuyWQSjlknpJF54ib36txVse / QZbidYS5LulOhQfbXJPVR5FG /
  JGcu2DjohFm84viZHe1Et5Qt (24 B each) + DFGRomanYuki-W9
Runtime key: kv-store "bq159_key" (server-issued at /users/register).

Usage:
  python3 tools/m3b_sinatra_crypto.py <m9d_image.bin> <file> [key]
"""
import struct
import sys

T1_OFF, T2_OFF, T3_OFF, T4_OFF = 0x14f7375, 0x14f7475, 0x14f7575, 0x14f7675


class Sinatra:
    def __init__(self, image):
        self.T1 = image[T1_OFF:T1_OFF + 256]
        self.T2 = image[T2_OFF:T2_OFF + 256]
        self.T3 = image[T3_OFF:T3_OFF + 256]
        self.T4 = image[T4_OFF:T4_OFF + 256]

    # ---- custom-AES-shaped key expansion (0x39d3a30) ----
    def _sub_word(self, w):
        b = (w & 0xFF, (w >> 8) & 0xFF, (w >> 16) & 0xFF, (w >> 24) & 0xFF)
        t = self.T1, self.T2
        return (t[0][t[1][b[3]]] << 24) | (t[0][t[1][b[2]]] << 16) | \
               (t[0][t[1][b[1]]] << 8) | t[0][t[1][b[0]]]

    def _rot_sub(self, w):
        hi = (w >> 24) & 0xFF
        b = (w & 0xFF, (w >> 8) & 0xFF, (w >> 16) & 0xFF)
        t = self.T1, self.T2
        return (t[0][t[1][b[2]]] << 24) | (t[0][t[1][b[1]]] << 16) | \
               (t[0][t[1][b[0]]] << 8) | t[0][t[1][hi]]

    def _rcon(self, r):
        x = self.T1[self.T4[r]]
        adj = 0x19 if x <= 0xE5 else -0xE6
        return self.T1[self.T3[(x + adj) & 0xFF]]

    def expand(self, key, rounds=12):
        """24-byte key -> 12 rounds -> 52-word (208 B) custom schedule."""
        nk = len(key) // 4
        W = list(struct.unpack('<%dI' % nk, key[:nk * 4]))
        for i in range(nk, (rounds + 1) * 4):
            t = W[i - 1]
            if i % nk == 0:
                t = self._rot_sub(t) ^ self._rcon(i // nk)
            elif nk > 6 and (i % nk) == 4:
                t = self._sub_word(t)
            W.append(W[i - nk] ^ t)
        return W

    # ---- custom-seeded RC4 ----
    def ksa(self, key):
        """S0 = table T1 (custom permutation), then standard RC4 KSA."""
        S = bytearray(self.T1)
        j = 0
        for i in range(256):
            j = (j + S[i] + key[i % len(key)]) & 0xFF
            S[i], S[j] = S[j], S[i]
        return S

    @staticmethod
    def prga(S, data):
        S = bytearray(S)
        i = j = 0
        out = bytearray()
        for b in data:
            i = (i + 1) & 0xFF
            j = (j + S[i]) & 0xFF
            S[i], S[j] = S[j], S[i]
            out.append(S[(S[i] + S[j]) & 0xFF] ^ b)
        return bytes(out)

    def stream(self, key, data):
        return self.prga(self.ksa(key), data)


EMBEDDED_KEYS = [
    b"vuyWQSjlknpJF54ib36txVse",
    b"QZbidYS5LulOhQfbXJPVR5FG",
    b"JGcu2DjohFm84viZHe1Et5Qt",
    b"DFGRomanYuki-W9",
]


if __name__ == '__main__':
    img = open(sys.argv[1], 'rb').read()
    target = open(sys.argv[2], 'rb').read()
    sn = Sinatra(img)
    keys = [sys.argv[3].encode()] if len(sys.argv) > 3 else EMBEDDED_KEYS
    for k in keys:
        pt = sn.stream(k, target[:256])
        print(f"key={k.decode()!r}: {pt[:48].hex()}")
        print(f"   ascii: {pt[:48]!r}")
