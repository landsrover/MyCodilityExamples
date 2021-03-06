// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int res = 0;
    for (auto it = A.begin(); it!= A.end(); it++)
    {
        res = res^(*it);   
    }
    return res;
}