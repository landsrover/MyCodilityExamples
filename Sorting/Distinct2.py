# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    s=set()
    for i in A:
        s.add(i)
    return len(s)