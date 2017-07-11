# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    sum = 0
    for i in A:
        sum = sum + i

    leng = len(A)
    total = (1+leng+1) * (leng+1) / 2;

    return total - sum