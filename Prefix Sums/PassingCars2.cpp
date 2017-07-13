// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    vector<int> One;
    int result = 0;
    int countOne = 0;
    for (auto i:A){
        if(i==1)
            countOne++;
        One.push_back(countOne);
    }
    for (unsigned int i=0; i<A.size();i++){
        if(A[i]==0){
            result+=countOne-One[i];    
        }
        if(result>1000000000){
            result = -1;
            break;
        }
    }
    return result;
}