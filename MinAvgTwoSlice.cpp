// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    if (A.size() < 2)
        return 0;
    int min_id = 0;
    float min_avg = 10001;
    float avg = 0;
    for (unsigned int i=0; i<A.size()-2;i++)
    {
        avg = (A[i]+A[i+1])/2.0;
        if (avg < min_avg)
        {
            min_avg = avg;
            min_id = i;
        }
        avg = (A[i]+A[i+1]+A[i+2])/3.0;
        if (avg < min_avg)
        {
            min_avg = avg;
            min_id = i;
        }
    }
    avg = (A[A.size()-2]+A[A.size()-1])/2.0;
    if (avg < min_avg)
    {
        min_avg = avg;
        min_id = A.size()-2;
    }
    return min_id;
    
}