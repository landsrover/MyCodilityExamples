// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

// you can use includes, for example:
#include <algorithm>
#include <climits>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    vector<int> Sum;
    int sums = 0;
    for (auto i : A)
    {
        sums = sums + i;
        Sum.push_back(sums);
    }
    Sum.pop_back();
    int diff = INT_MAX;
    for (auto j : Sum)
    {
        diff = min(diff, abs(sums - j*2));   
    }
    return diff;
}