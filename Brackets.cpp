// you can use includes, for example:
// #include <algorithm>
#include <deque>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++11 (g++ 4.8.2)
    deque<char> pairness;
    for (auto c : S)
    {
        switch (c)
        {
            case '(':
            case '[':
            case '{':
                pairness.push_back(c);
                break;
            case ')':
                if (pairness.size()<=0 || pairness.back() != '(')
                    return 0;
                else
                    pairness.pop_back();
                break;
            case ']':
                if (pairness.size()<=0 || pairness.back() != '[')
                    return 0;
                else
                    pairness.pop_back();
                break;
            case '}':
                if (pairness.size()<=0 || pairness.back() != '{')
                    return 0;
                else
                    pairness.pop_back();
                break;
        }
    }
    if (pairness.size() > 0)
        return 0;
    else
        return 1;
}