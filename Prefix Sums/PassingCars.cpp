// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    if (A.size() < 1)
        return 0;
    int num1 = 0;
    int num0 = 0;
    int sum = 0;
    for (auto i: A)
    {
        if (i==1)
        {
            num1++;
        }else{
            num0++;
        } 
    }
    for (auto i: A)
    {
        if (i==0)
        {
            sum = sum + num1;
            num0--;
        }else{
            num1--;
        }
        if (!num0 || !num1)
            break;
        if (sum > 1000000000)
        {
            sum = -1;
            break;
        }   
    }
    return sum;
    
}