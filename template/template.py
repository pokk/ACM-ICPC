""" Created by wu.jieyi on 2016/02/09. """
import sys


def main():
    for inp in sys.stdin:
        # If just input 'Enter' key.
        if len(inp) is 1 and ord(inp) is 10:
            break
        # If your input are many args.
        inp_s = inp.split()

        print(inp_s[0], inp_s[1], ...)


if __name__ == '__main__':
    main()
