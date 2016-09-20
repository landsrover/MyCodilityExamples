/ you can use includes, for example:

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    sort(A.begin(),A.end());
    bool found = false;
    if (A.size()<3)
        return found;
        
    for (decltype(A.size()) i=0; i<A.size()-2; i++)
    {
        if (static_cast<long>(A[i]) + A[i+1] > A[i+2])
        {
            found = true;
            break;
        }
    }
    return found;
}