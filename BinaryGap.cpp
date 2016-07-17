// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    if (N <= 1)
        return 0;
    while (N%2 == 0)
        N= N>>1;
    int max_gap = 0;
    int cur_gap = 0;
    while (N)
    {
        int sym= N%2;
        if (sym == 0)
        {
            ++cur_gap;
        }else{
         max_gap=max(max_gap,cur_gap);
        
         cur_gap=0;
        }
         N = N >>1;
    }
    return max_gap;
}