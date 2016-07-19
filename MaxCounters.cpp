// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int max_level =0;
    int max_cur =0;
    bool max_set = false;
    vector<int> B(N,0);
        
    if(A.size()==0)
        return B;
    for (auto i=0; i< int(A.size()); i++)
    {
        if (A[i] == N+1)
        {
            max_set = true;
            max_level = max_cur;
        }else if (A[i]>0){
            if (max_set && B[A[i]-1]<max_level)
            {
                B[A[i]-1]=max_level + 1;
            }else{
                B[A[i]-1]= B[A[i]-1] + 1;
            }
            max_cur = max(max_cur,B[A[i]-1]);
        }        
    }
    if (max_set)
    {
        for (auto j = 0; j < int(B.size()); j++)
        {
            if (B[j] < max_level)
            {
                B[j]= max_level;   
            }
        }        
    }
    return B;
}