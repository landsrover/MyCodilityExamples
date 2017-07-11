// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++11 (g++ 4.8.2)
    if (A < 0 || B < 0 || K <= 0 || A > B)
    {
        return 0;
    }
    int x = 0;
    int sum = 0;
    if ( A % K == 0 )
    {
        x = 1;
    }
    sum =  B/K - A/K + x;
    return sum;
    
}