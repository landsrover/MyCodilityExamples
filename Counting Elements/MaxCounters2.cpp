/ you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> B(N,0);
    int max_counter = 0;
    int maxB = 0;
    for (auto i:A){
        if (i==N+1){
            max_counter=maxB;
        }else if (i<=N){
            if(B[i-1]<max_counter && max_counter>0){
                B[i-1]=max_counter+1; 
                
            }else{
                B[i-1]++;
            }
            maxB=max(maxB,B[i-1]);
        }
    }
    for(auto &i:B){ //set all the other missing numbers to max counter
        if (i<max_counter && max_counter > 0){
            i=max_counter;
        }  
    }
    return B;
}