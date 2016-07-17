// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, int Y, int D) {
    // write your code in C++11 (g++ 4.8.2)
    int res = 0;
    if (Y > X && D > 0)
    {
        res = (Y - X + D - 1)/D;    
    }
    return res;
}