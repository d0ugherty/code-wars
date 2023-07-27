def ip_to_num(ip):
    octets = ip.split('.')
    binString = ""
    for octet in octets:
        binString += int_to_binary(int(octet))
    return binary_to_dec(binString)


def num_to_ip(num):
    binary = format(num, '032b')
    #extract substrings of length 8 & create sequence between 0-32 w a step of 8
    octets = [binary[i:i+8] for i in range(0, 32, 8)]
    return format_ip(octets)

def int_to_binary(number):
    return format(number, '08b')

def binary_to_dec(binary):
    decimal = 0
    for digit in binary:
        decimal = decimal * 2 + int(digit)
    return decimal

def format_ip(octets):
    ip_str = ""
    length = len(octets)
    for index,octet in enumerate(octets):
        ip_str += str(binary_to_dec(octet))
        if(index < length - 1):
            ip_str += "."
    return ip_str
