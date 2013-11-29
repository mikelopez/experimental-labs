import unittest
from fib import *

class FibonacciTest(unittest.TestCase):
    def test_fib(self):
        f = fib(50)
        c = 2
        print f
        self.assertTrue(f[0] == 0)
        self.assertTrue(f[1] == 1)
        while c <= (len(f) - 1):
            if c > 1:
                if not f[c] == 1:
                    self.assertTrue(f[c] > f[c-1])
                self.assertTrue(f[c] == (f[c-1] + f[c-2]))
            c+=1
        print "Fuck yeah!"

if __name__ == '__main__':
    unittest.main()
