// you can use includes, for example:
// #include <algorithm>
#include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int count = 0;
    if (A.size() == 0)
        return count;
        
    map<int,int> dic;
    for(auto &i: A)
    {
        ++dic[i];
    }
    count = dic.size();
    return count;
}