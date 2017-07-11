def solution(A):
    # write your code in Python 2.7
    import sys
    min_a = sys.maxint
    max_a = -min_a - 1
    
    from sets import Set
    B=Set()
    
    if len(A)==0:
        return 1
    
    for i in A:
        if i>0:
            min_a = min(min_a,i)
            max_a = max(max_a,i)
            B.add(i)
    
    if max_a < min_a or min_a<0 or max_a < 0:
        return 1
    
    ret = 1
    start =1
    while start < min(max_a+2,sys.maxint):
        if start not in B:
            ret = start
            break
        start = start + 1
    
    return ret