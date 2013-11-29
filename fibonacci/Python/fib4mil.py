""" 
Project Euler Question #2
Secondary answer

Only used with numbers < 70 cause of floater issues

"""

__author__ = "Marcos Lopez"

from question import *


phi = (1 + 5**0.5) / 2

def fib(n):
    return int(round((phi**n - (1-phi)**n) / 5**0.5))

sum = 0
for n in map(fib, range(0, 69)):
    sum += n


print "The answer is %s" % sum
