"""
Demonstration of the insertion sort.

Time complexity Best O(n) Average/Worse O(N^2)

Useful for very small or paritially sorted lists.
For every insertion, all elements in greater position are shifted
to the left or beginning of the list.
"""

def insertion_sort(l):
    # sorts the list in place using insertion sort algorithm
    for index in range(1, len(l)):
        value = l[index]
        i = index - 1
        while i >= 0:
            if value < l[i]:
                l[i+1] = l[i] # shift number in slot i right to slot i+1
                l[i] = value  # shift val to the left
                i = i - 1
            else:
                break


