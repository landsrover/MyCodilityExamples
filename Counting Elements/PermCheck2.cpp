// you can use includes, for example:
// #include <algorithm>
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> perm={};
    for (auto i:A){
        if (i>0 && i<=(int)A.size()){
            perm.insert(i);
        }
    }
    return perm.size()==A.size();
}