#!/usr/bin/env python3
import argparse


def rgb(r, g, b):
    return dec_to_hex(r) + dec_to_hex(g) + dec_to_hex(b)


def dec_to_hex(decimal):
    decimal = int(decimal)
    if decimal < 0:
        return "00"
    elif decimal > 255:
        return "FF"
    return f"{decimal:02X}"


if __name__ == '__main__':
    # Pass test values through command line
    parser = argparse.ArgumentParser(description="hexadecimal to RGB value")

    parser.add_argument('red', help='red_value')
    parser.add_argument('green', help='green value')
    parser.add_argument('blue', help='blue value')

    args = parser.parse_args()
    red = args.red
    green = args.green
    blue = args.blue
    print(rgb(red, green, blue))
