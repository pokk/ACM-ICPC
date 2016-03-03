""" Created by wu.jieyi on 2016/02/09. """
import sys

"""
** Testing case **

Sample Input
1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5
1PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu5
1KLJ'pz'{ol'{yhklthyr'vm'{ol'Kpnp{hs'Lx|pwtlu{'Jvywvyh{pvu5

Sample Output
*CDC is the trademark of the Control Data Corporation.
*IBM is a trademark of the International Business Machine Corporation.
*DEC is the trademark of the Digital Equipment Corporation.
"""


def decoder(enc_str):
    decode = 7
    for c in enc_str:
        print() if c == '\n' else print(chr(ord(c) - decode), end='')


def main():
    for inp in sys.stdin:
        if inp == '\n':
            print()
        else:
            decoder(inp)


if __name__ == '__main__':
    main()
