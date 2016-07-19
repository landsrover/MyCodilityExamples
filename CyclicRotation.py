# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A, K):
    # write your code in Python 2.7
    if(len(A) <= 1):
        return A
    K = K % len(A)
    return A[-K:] + A[:-K]