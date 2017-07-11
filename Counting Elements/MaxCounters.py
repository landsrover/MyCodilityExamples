# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(N, A):
    # write your code in Python 2.7
    if N < 1:
        return None
    maxlevel = 0
    maxready = 0
    maxset = False
    B=[0 for i in range(0,N)]
    for i in A:
        if i == N+1:
            maxset = True
            maxlevel = maxready
        elif i>0:
            if maxset == True and B[i-1]<maxlevel:
                B[i-1]=maxlevel + 1
            else:
                B[i-1]=B[i-1] + 1
            
            maxready=max(maxready,B[i-1])
        else:
            return None
    if maxset == True:
        for i,v in enumerate(B):
            if v < maxlevel:
                B[i] = maxlevel
    
    return B