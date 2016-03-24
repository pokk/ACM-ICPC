""" Created by wu.jieyi on 2016/03/23. """
import sys


def main():
    arr = [1, 1, 2, 2]
    for inp in sys.stdin:
        if int(inp) >= len(arr):
            for index in range(len(arr), int(inp) + 1):
                arr.append(arr[index - 2] + arr[index - 3])
            print(arr[int(inp)])
        else:
            print(arr[int(inp)])


if __name__ == '__main__':
    main()
