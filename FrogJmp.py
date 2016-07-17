# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(X, Y, D):
    # write your code in Python 2.7
    res = 0
    if (Y>X and D>0):
        res = (Y - X + D -1)/D
    return res