import math

def validate(n):
    print(luhns(n))
    return luhns(n)

def getLength(number):
    return int(math.log10(number) + 1)

def luhns(number):
    sum = 0
    length = getLength(number)
    parity = length % 2
    numString = str(number)
    i = length - 1
    while i >= 0:
        if i % 2 != parity:
            sum += int(numString[i])
        else:
            print(numString[i])
            result = 2 * int(numString[i])
            if result > 9:
                sum += result - 9
            else:
                sum += result
        i -= 1
    return sum % 10 == 0
