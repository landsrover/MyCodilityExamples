// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++11 (g++ 4.8.2)
    int pairness = 0;
    for (auto c: S)
    {
        if (c == '(')
        {
            ++pairness;
        }else{
            --pairness;
            if (pairness < 0)
                return 0;
        }
    }
    if (pairness > 0)
        return 0;
    else
        return 1;
}