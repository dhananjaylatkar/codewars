import math
def narcissistic( value ):
    num_digits = int(math.log10(value)) + 1
    sum = 0
    for i in range(1, num_digits+1):
        i_th_digit = (value / int(math.pow(10, i - 1))) % 10;
        sum += int(math.pow(i_th_digit, num_digits));
        print(i, i_th_digit, sum, value)
    if sum == value:
        return True
    return False
narcissistic(371)
