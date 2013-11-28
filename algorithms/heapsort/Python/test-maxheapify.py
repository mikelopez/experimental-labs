import unittest
from random import randint
from maxheap import *

class TestHeapSort(unittest.TestCase):
    def test_heapsort(self):
        A = [(x*randint(1,5)) for x in range(1, 1024)]
        #A = [3, 5, 8, 7, 1, 13, 11, 16, 6]
        print A
        length = (len(A) - 1)
        build_heap(A, length)
        sort_heap(A, length)
        print A



if __name__ == '__main__':
    unittest.main()
