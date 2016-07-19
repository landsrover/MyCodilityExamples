# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A, B, K):
    # write your code in Python 2.7
    if K <= 0 or A < 0 or B < 0 or A>B:
        return -1
    if (A%K ==0):
        x = 1
    else:
        x = 0
    return B/K - A/K + x