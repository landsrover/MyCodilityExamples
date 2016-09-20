# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    if len(A)==0:
        return 0;
    dict = {}
    res = A[0]
    for i in A:
        if dict.has_key(i):    
            dict[i]+=1
        else:
            dict[i]=1
    return len(dict)