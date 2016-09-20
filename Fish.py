# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A, B):
    # write your code in Python 2.7
    lenth = len(A)
    river = []
    for i in range(lenth):
        if len(river) == 0:
            river.append((A[i],B[i]))
        else:
            while len(river)>0:
                if river[-1][1] == 1 and B[i] == 0:
                    if river[-1][0] < A[i]:
                        river.pop()
                        continue
                    else:
                        break
                else:
                    river.append((A[i],B[i]))
                    break
            else:
                river.append((A[i],B[i]))
    
    return len(river)