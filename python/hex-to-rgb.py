#!/usr/bin/env python3

import sys
import argparse

def hex_string_to_RGB(hex_string):
    hex_string = hex_string.lower()
    rgb = {'r':0,'g':0, 'b':0}
    
    # break hex string down into rgb components 
    rgb['r'] = hex_to_dec(hex_string[1]) * 16 + hex_to_dec(hex_string[2])
    rgb['g'] = hex_to_dec(hex_string[3]) * 16 + hex_to_dec(hex_string[4])
    rgb['b'] = hex_to_dec(hex_string[5]) * 16 + hex_to_dec(hex_string[6])
    return rgb

def hex_to_dec(hex):

    match hex:
        case  "0":
            return 0
        case "1":
            return 1
        case "2":
            return 2
        case "3":
            return 3
        case "4":
            return 4
        case "5":
            return 5
        case "6":
            return 6
        case "7":
            return 7
        case "8":
            return 8
        case "9":
            return 9
        case "a":
            return 10
        case "b":
            return 11
        case "c":
            return 12
        case "d":
            return 13
        case "e":
            return 14
        case "f":
            return 15
        case _:
            print("error at hex_to_dec  input: ")
            print(hex)

# Pass test values through command line
parser = argparse.ArgumentParser(description="code wars hexadecimal to RGB value")

parser.add_argument('hex_code', help='hex code')
args = parser.parse_args()
hex_code = args.hex_code
print(hex_string_to_RGB(hex_code))
