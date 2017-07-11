// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++11 (g++ 4.8.2)
    vector<vector<int>> vACGT(4, vector<int>{0});
    vector<int> res;
    auto len = S.size();
    int a,c,g,t;
    a=c=g=t=0;
    for (unsigned int i=0; i<len; i++)
    {
        switch (S[i]){
            case 'A':
                a++;
                break;
            case 'C':
                c++;
                break;
            case 'G':
                g++;
                break;
            case 'T':
                t++;
                break;
            default:
                break;
        }
        vACGT[0].push_back(a);    
        vACGT[1].push_back(c);
        vACGT[2].push_back(g);
        vACGT[3].push_back(t);
    }
    
    //Caculate the result
    for (unsigned int m=0; m<P.size(); m++)
    {
        for (unsigned int n=0; n<4; n++)
        {
            if (vACGT[n][Q[m]+1] - vACGT[n][P[m]] > 0)
            {
                res.push_back(n+1);
                break;
            }
        }
    }
    return res;
}