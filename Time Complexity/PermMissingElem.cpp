// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int sum = 0;
    for (auto i : A)
    {    
        sum=sum+i;
    }
    auto len = A.size();
    int total = (1+len+1)*(len+1) / 2;
    return total - sum;
}