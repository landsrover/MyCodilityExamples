// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    if (N <= 0)
        return -1;
        
    int gap = 0;
    int count = 0;
    bool begin = false;
    while (N > 0)
    {
        if (!begin)
        {
            while( !(N & 1) && (N>0))
                N = N>>1;
            begin = true;
            count = 0;
        }
        if (begin)
        {
            while( (N & 1) && (N > 0))   
                N = N>>1;
            while( !(N & 1) && (N > 0)) 
            {
                N = N>>1;
                ++count;
            }
            gap = max(gap, count);
            count = 0;
            begin = false;      
        }
            
    }
    return gap;
}