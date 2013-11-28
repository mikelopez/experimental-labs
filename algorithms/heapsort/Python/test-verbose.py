import unittest
from heapsort_verbose import *

class TestHeapSort( unittest.TestCase ):
    def testHeapsort( self ):
        A = [8, 5, 3, 1, 9, 6, 0, 7, 4, 2]
        heapsort( A )
        for i in range( 1, len( A ) ):
            if A[i - 1] > A[i]:
                self.fail( "heapsort method fails." )
        print A

if __name__ == '__main__':
    unittest.main()
