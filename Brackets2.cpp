// you can use includes, for example:
// #include <algorithm>
#include <map>
#include <set>
#include <deque>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++11 (g++ 4.8.2)
    map<char,char> dict;
    deque<char> contain;
    set<char> left{'(','[','{'};
    dict['}'] = '{';
    dict[']'] = '[';
    dict[')'] = '(';
    
    for (auto c : S)
    {
        if (left.find(c) != left.end())
        {
            contain.push_back(c);
        }else{
            if (contain.size() > 0 && contain.back()==dict[c])
            {
                contain.pop_back();
            }else{
                return 0;
            }
        } 
    }
    if (contain.size() > 0)
        return 0;
    
    return 1;

}