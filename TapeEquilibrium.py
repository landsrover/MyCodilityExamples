# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"
import sys

def solution(A):
    # write your code in Python 2.7
    SumA = []
    cursum = 0
    for i in A:
        cursum = cursum +i
        SumA.append(cursum)
    
    SumA = SumA[:-1]
    mins = sys.maxint
    
    for j in SumA:
        mins = min(mins, abs(cursum -j - j))
       
    return mins