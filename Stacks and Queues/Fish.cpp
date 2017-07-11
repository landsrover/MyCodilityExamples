// you can use includes, for example:
// #include <algorithm>
#include <deque>
#include <vector>
#include <utility>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11 (g++ 4.8.2)
    deque< pair<int,int> > river;
    int lens = A.size();
    for (int i = 0; i < lens; i++)
    {
        if (river.size() == 0)
        {
            river.push_back( make_pair(A[i],B[i]) );
        }else{
            while (!river.empty())
            {
                auto fish = river.back();
                if (fish.second == 1 && B[i]==0)
                {
                    if (fish.first < A[i])
                    {
                        river.pop_back(); //fish existing is eaten
                        continue;
                    }else{
                        break; //eat the comming fish
                    }
                }else{
                    river.push_back(make_pair(A[i],B[i]));
                    break;//both keep alive
                }
            }
            if (river.empty())
                river.push_back( make_pair(A[i],B[i]) );            
        }
    }
    return river.size();
}