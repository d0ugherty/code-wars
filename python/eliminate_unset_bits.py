def eliminate_unset_bits(number):
    shift_amt = number.count('1')
    return (1 << shift_amt) - 1
