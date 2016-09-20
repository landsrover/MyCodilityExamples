# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    A.sort()
    return max(A[0]*A[1]*A[-1],A[-3]*A[-2]*A[-1])