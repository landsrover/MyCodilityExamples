// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    int lenA = A.size();
    if (lenA == 0 || K<0)
        return A;
    auto k = K % lenA;
    if (k == 0)
        return A;

    vector<int> b;
    for (auto it = A.begin()+lenA-k; it!=A.end();++it)
    {
        b.push_back(*it);
    }
    for (auto it = A.begin(); it!= A.end() - k; ++it)
    {
        b.push_back(*it);
    }
    return b;
}