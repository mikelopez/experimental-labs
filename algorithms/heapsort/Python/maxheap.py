"""
Max heapify
O(n log n)

9 Elements in the array
Assuming A = [3, 5, 8, 7, 1, 13, 11, 16, 6]

"""

def build_heap(A, last):
    # starts from half
    start = (last/2)
    for i in range(start, -1, -1):
        max_heapify(A, i, last)

def sort_heap(A, last):
    for i in range(last, 0, -1):
        if A[0] > A[i]:
            swapit(A, 0, i)
            max_heapify(A, 0, i-1)

def swapit(A, x, y):
    tmp = A[x]
    A[x] = A[y]
    A[y] = tmp

def max_heapify(A, parent, last):
    print "max_heapify(A, %s, %s)" % (parent, last)
    # gets the outer left child, uses +1
    child = (parent * 2) + 1
    # checks child with right child
    while child <= last:
        if child < last and A[child] < A[child +1]:
            # increment child to use the right one instead.
            child += 1
        if A[child] > A[parent]:
            swapit(A, child, parent)
        parent = child
        child = (2*parent)+1



