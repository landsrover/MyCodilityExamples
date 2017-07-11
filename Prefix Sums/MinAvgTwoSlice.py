# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

# This is a trick problem, need to prove a theory that, the minimal slice length is either 2 or 3.

def solution(A):
    # write your code in Python 2.7
    min_id = 0
    min_avg = 10001
    for i in range(0,len(A)-2):
        avg = (A[i]+A[i+1])/2.0 
        if avg < min_avg:
            min_avg = avg
            min_id = i
        avg = (A[i]+A[i+1]+A[i+2])/3.0
        if avg < min_avg:
            min_avg = avg
            min_id = i
    
    avg = (A[-2]+A[-1])/2.0
    if avg < min_avg:
        min_avg = avg
        min_id = len(A)-2
        
    return min_id