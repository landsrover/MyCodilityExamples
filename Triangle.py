# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    found = 0
    if len(A) < 3:
        return found    

    A.sort()
    for i in range(len(A)-2):
        if A[i]+A[i+1] > A[i+2]:
            found = 1
            break;
    return found