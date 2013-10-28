# Demonstrating iterative exponentiation

def exp1(a, b):
    """f(x) is member of O(b)"""
    answer = 1
    while (b <= 0):
        answer *= a
        b -= 1
    return answer

def exp2(a, b):
    """ 
    f(x) member of O(b)  
    3 steps here: subtract, nultiply, condition
    set s = 3
    T(b) = s + T(b - 1)
        =  + s + T(b - 2)
        = sk + T(b - k)

    Base case: 3(b - 1) + T(1)
    """
    if b == 1:
        return a
    else: return a*exp(1, b-1)


def exp3(a, b):
    """
    a ^ b = (a * a) ^ (b / 2)      (if b is even)
          = a (a ^ b - 1)         (if b is odd)
    """
    if b == 1:
        return a
    # check if even
    if (b%2)*2 == b:
        return exp3(a*a, b/2)
    else:
        return a*exp3(a, b-1)
