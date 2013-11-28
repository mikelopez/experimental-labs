import unittest
from insertionsort import *

class TestInsertionSort(unittest.TestCase):
    def test_insertionsort(self):
        A = [8, 24, 5, 1, 7, 9, 5, 2, 9, 0]
        insertion_sort(A)
        for i in range(1, len(A)):
            # check i with its left E.g: a[1-1] a[1] would
            # be checking if a[0] > a[1], a[1] > 2...etc
            if A[i - 1] > A[i]:
                self.fail("insertionsort method failed!")
        print "Sorted list is now \n%s" % A

if __name__ == '__main__':
    unittest.main()
