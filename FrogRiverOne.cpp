// you can use includes, for example:
// #include <algorithm>
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    if (X < 0 || X > int(A.size()) || A.size() == 0)
    {
        return -1;
    }
    set<int> B{};
    
    int ret = -1;
    for (int i = 0; i < int(A.size()); i++)
    {
        if (A[i]>0 && A[i]<= X)
        {
            B.insert(A[i]);
        }
        if (int(B.size()) == X)
        {
            ret = i;
            break;
        }
    }
    return ret;
}