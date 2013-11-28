"""
Heapsort implementation
Timing complexity Best/worse/average: O(n log n)

Each parent node is greater than its child

Given n as the index number in question, find the left/right children
using the following:
 - left: 2n + 1
 - right: 2n + 2

Check to see if an element is greater than its children. 
If not, the values of the element and child are swapped.
Continue to check this until the element is in a position where
it is greater than its children.

"""

def heapsort( aList ):
  # convert aList to heap
  length = len( aList ) - 1
  print '- length is at %s' % length
  leastParent = length / 2
  print '- leastParent is at %s' % leastParent
  for i in range ( leastParent, -1, -1 ):
    print 'for %s in range %s, -1, -1' % (i, leastParent)
    moveDown( aList, i, length )

  print "\n----------FLATTENING ARRAY\n----------------\n\n"

  # flatten heap into sorted array
  for i in range ( length, 0, -1 ):
    print "for %s in range(%s, 0, -1)" % (i, length)
    print "\tA[0] = %s, A[i] = %s" % (aList[0], aList[i])
    print "\tif A[0] > A[i]"
    if aList[0] > aList[i]:
      print "\t----Swapping(A, 0, %s)" % i
      swap( aList, 0, i )
      print "\t----A[0] = %s, A[i] = %s" % (aList[0], aList[i])
      print "\tCalling movedown(A, 0, %s - 1)........" % (i)
      moveDown( aList, 0, i - 1 )


def moveDown( aList, first, last ):
  print '\t- movedown(A, %s, %s) ' % (first, last)
  largest = 2 * first + 1
  print '\t- largest = %s' % largest
  print '\t- while %s <= %s' % (largest, last)
  while largest <= last:
    # right child exists and is larger than left child
    print "\t\tif Largest < Last and A[%s] < A[%s + 1]" % (largest, largest)
    if ( largest < last ) and ( aList[largest] < aList[largest + 1] ):
      largest += 1
      print "\t\tIncrementing largest + 1"
    else:
        print "\t\t-- !skip %s" % (largest+1)

    # right child is larger than parent
    print "\t\tA[%s], A[%s] = %s, %s" % (largest, first, aList[largest], aList[first])
    print "\t\tif A[%s] > A[%s]" % (largest, first)
    if aList[largest] > aList[first]:
      print "\t\tSwapping (A, %s, %s) " % (largest, first)
      swap( aList, largest, first )
      print "\t\tAfter swapping, largest, first = %s, %s" % (largest, first)
      # move down to largest child
      first = largest;
      largest = 2 * first + 1
      print "\t\tSet first to %s" % first
      print "\t\tSet largest to N*2+1 = %s" % (largest)
    else:
      return # force exit


def swap( A, x, y ):
  tmp = A[x]
  A[x] = A[y]
  A[y] = tmp
