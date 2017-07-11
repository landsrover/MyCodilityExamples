// you can use includes, for example:
// #include <algorithm>
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    if (A.size() == 0)
        return 1;
    
    int min_a = A[0];
    int max_a = A[0];
    set<int> B = {};
    
    for (auto i: A)
    {
        min_a = min(i, min_a);
        max_a = max(i, max_a);
        if (i>0)
            B.insert(i);
    }
    int start = 1;
    int end = B.size()+2;
    while (start < end)
    {
        if (B.find(start) == B.end())
            break;
        start++;
    }
    return start;
}