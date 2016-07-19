# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    cout1 = 0
    cout0 = 0
    count = 0
    for i in A:
        if i == 1:
            cout1= cout1 + 1
        else:
            cout0= cout0 + 1

    for i in A:
        if i == 0:
            count = count + cout1
            cout0 = cout0 - 1
        else:
            cout1 = cout1 - 1
        if cout1 == 0 or cout0 == 0:
            break
        if count > 1000000000:
            count = -1
            break
        
    return count
        