# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A, K):
    # write your code in Python 2.7
    lenA = len(A)
    if lenA <= 0:
        return A
    K = K % lenA
    while (K > 0):
        v = A.pop()
        A.insert(0,v)
        K = K - 1
    return A