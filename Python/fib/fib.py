def fib(n):
    # creates fibonacci sequence up to n
    # if n > 100: return false
    if n > 100:
        return False
    start = [0, 1]
    i = 0
    while i < n:
        start.append((start[i] + start[i+1]))
        i+=1
    print start
