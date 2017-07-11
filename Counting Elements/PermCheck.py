# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    from sets import Set
    B=Set()
    len_a = len(A)
    if len_a == 0:
        return 0
    for i in A:
        if i>0 and i <=len_a:
            B.add(i)
    ret = 0
    if len_a == len(B):
        ret = 1
    return ret