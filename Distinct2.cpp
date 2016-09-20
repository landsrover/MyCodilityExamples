// you can use includes, for example:
// #include <algorithm>
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    set<int> s = {};
    for (auto i:A)
    {
        s.insert(i);
    }
    return s.size();
}