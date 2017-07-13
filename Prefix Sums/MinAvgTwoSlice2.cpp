// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==2){
        return 0;   
    }
    double minavg = 3*10000+1;
    int minind = 100000+1;
    double avg2;
    double avg3;
    for (auto it=A.begin(); it< A.end()-1;it++){
        avg2=((double)(*it)+*(it+1))/2;
        if(avg2<minavg){
            minavg=avg2;
            minind=it-A.begin();
        }
        if(it<A.end()-2){
            avg3=((double)(*it)+*(it+1)+*(it+2))/3;
            if(avg3<minavg){
                minavg=avg3;
                minind=it-A.begin();
            }
        }
    }
    return minind;
}