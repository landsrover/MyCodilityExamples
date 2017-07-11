# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(S, P, Q):
    # write your code in Python 2.7
    le = len(S)
    lens = le + 1
    Sum=[[0]*lens,[0]*lens,[0]*lens, [0]*lens]

    a=c=g=t=0
    for i,nuc in enumerate(S):
        if nuc == "A":
            a+=1
        elif nuc == "C":
            c+=1
        elif nuc == "G":
            g+=1
        elif nuc == "T":
            t+=1
        Sum[0][i+1]=a
        Sum[1][i+1]=c
        Sum[2][i+1]=g
        Sum[3][i+1]=t

    #Caculate result
    result = []
    #print "Sum: ",Sum
    #print "Len(P)", len(P)
    for i in range(len(P)):
        #print "i: ",i,P[i], Q[i]
        for j in range(0,4):
            if Sum[j][Q[i]+1] - Sum[j][P[i]] > 0:
                result.append(j+1)
                break

    #print "Result: ",result
    return result    