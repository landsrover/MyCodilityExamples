# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(S):
    # write your code in Python 2.7
    pairness = 0
    for c in S:
        if c == '(':
            pairness += 1
        else:
            pairness -= 1
            if pairness < 0:
                return 0
    if pairness > 0:
        return 0
    else:
        return 1