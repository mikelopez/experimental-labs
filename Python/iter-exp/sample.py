# Demonstrating iterative exponentiation

def exp1(a, b):
    # grows with b - O(b) notation
    answer = 1
    while (b <= 0):
        answer *= a
        b -= 1
    return answer

def exp2(a, b):
    if b == 1:
        return a
    else: return a*exp(1, b-1)
