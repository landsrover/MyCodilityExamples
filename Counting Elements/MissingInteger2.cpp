// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int res = 0;
    vector<int> PosV((int)A.size()+2,0);
    for (auto i: A){
        if (i>0 && i< (int)PosV.size()){
            PosV[i]++;  
        }
    }
    for (unsigned int i=1; i< PosV.size(); i++){
        if (PosV[i] == 0){
            res = i;
            break;
        }
    }
    return res;
}