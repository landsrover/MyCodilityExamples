// you can use includes, for example:
// #include <algorithm>
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int len = A.size();
    int ret = 0;
    if (len == 0)
        return 0;
    set<int> B{};
    for (int i: A)
    {
        if ( i>0 && i<= len )
        {
            B.insert(i);
        }
    }
    if (int(B.size()) == len)
    {
        ret = 1;
    }
    return ret;
}