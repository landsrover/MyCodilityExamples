# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(N):
    # write your code in Python 2.7
    if N < 0:
        return 0;
    while((N%2)==0):
        N=N/2
    n=bin(N)
    x=n[2:].split('1')
    y=[len(a) for a in x]
    return max(y)