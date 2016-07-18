# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"
from sets import Set
def solution(X, A):
    # write your code in Python 2.7
    if X > len(A):
        return -1
    SetA=Set()
    ret = -1
    for i,k in enumerate(A):
        if k<=X and k not in SetA:
            SetA.add(k)
        if len(SetA) == X:
            ret = i
            break
    return ret