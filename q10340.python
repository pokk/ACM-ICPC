""" Created by Jieyi on 2/9/16. """
import sys

"""
Sample Input :

sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter


Sample Output :

Yes
No
Yes
No
"""


def is_sub_string(str1, str2):
    return str1 in str2


def main():
    for inp in sys.stdin:
        # If just input 'Enter' key.
        if len(inp) is 1 and ord(inp) is 10:
            break
        # If your input are many args.
        inp_s = inp.split()

        print('Yes' if is_sub_string(inp_s[0], inp_s[1]) else 'No')


if __name__ == '__main__':
    main()
