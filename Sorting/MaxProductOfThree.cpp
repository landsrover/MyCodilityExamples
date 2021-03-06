// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int result;
    if (A.size() == 3)
    {
        result = A[0] * A[1] * A[2];
        return result;
    }
    sort(A.begin(),A.end());
    result = max(A[0]*A[1]*A[A.size()-1], A[A.size()-3]*A[A.size()-2]*A[A.size()-1]);
    
    return result;
    
}