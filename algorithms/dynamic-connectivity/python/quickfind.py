"""
Performing union on a list of integers.

"""
MAX = 10
class QuickFind:
    numbers = []
    def __init__(self):
        [getattr(self, 'numbers').append(x) for x in range(0, MAX)]

    def connected(self, x, y):
        """Checks if the values are connected in the same component"""
        return (self.numbers[x] == self.numbers[y])

    def union(self, x, y):
        """Performs a union"""
        pid = self.numbers[x]
        qid = self.numbers[y]
        for index, val in enumerate(getattr(self, "numbers")):
            if self.numbers[index] == pid:
                self.numbers[index] = qid

    def verbose(self):
        print "Index \t Value"
        for i, data in enumerate(self.numbers):
            print "%s \t %s" % (i, data)


if __name__ == "__main__":
    u = QuickUnion()
    u.verbose()
    print "\n\nRunning: union(2, 5)\n"
    u.union(2, 5)
    u.verbose()
    print "\n\nRunning: union(3, 7)\n"
    u.union(3, 7)
    u.verbose()
    print "\n\nRunning: union(2, 7)\n"
    u.union(2, 7)
    u.verbose()

