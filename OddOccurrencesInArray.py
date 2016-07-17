# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    res = 0
    for a in A:
        res = a^res
    return res