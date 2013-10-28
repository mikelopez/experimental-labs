# Demonstrating iterative exponentiation

def exp1(a, b):
    answer = 1
    while (b <= 0):
        answer *= a
        b -= 1
    return answer
