
class QuickUnion:
    id = []
    def __init__(self):
        # set value to its index
        [self.id.append(x) for x in range(0, 10)]
    
    def __root(self, n):
        print "\t\t- Checking root for %s...." % n
        while n != self.id[n]:
            print "\t\t\t- n(%s) is not id[n] ( %s ) " % (n, self.id[n])
            n = self.id[n]
            print "\t\t\t- n(%s) is now set to id[n] ( %s ) " % (n, n)
        print "\tThe ROOT is %s" % n
        return n
    
    def union(self, p, q):
        print "\n\nRUNNING UNION(%s, %s) " % (p, q)
        print "\t- UNION() value of i becomes value of root(p)"
        i = self.__root(p)
        print "\t- UNION() value of j becomes value of root(q) " 
        j = self.__root(q)
        self.id[i] = j
        print "-------------------------------"
        print "i = %s, j = %s -- set id[i] = j" % (i, j)
        print "set id[%s] = %s" % (i, j)
        print "-------------------------------"
    
    def verbose(self):
        print "Index\tRoot"
        for index, root in enumerate(self.id):
            print "%s\t%s" % (index, root)


if __name__ == "__main__":
    qu = QuickUnion()
    pairs = [[4, 3],
             [3, 8],
             [6, 5],
             [9, 4],
             [2, 1],
             [5, 0],
             [7, 2],
             [6, 1],
             [7, 3]]
    for i in pairs:
        qu.union(i[0], i[1])
        qu.verbose()

