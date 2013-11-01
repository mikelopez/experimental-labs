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


if __name__ == '__main__':
    l = [5, 9, 8, 12, 4, 22]
    print "Using list: %s" % l
    insertion_sort(l)
    print "List is now\n%s" % l
