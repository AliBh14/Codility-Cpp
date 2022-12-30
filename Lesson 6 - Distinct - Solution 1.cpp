/* ● Distinct
Compute number of distinct values in an array. */

#include <algorithm>

int solution(vector<int> &A) {
    unsigned int N = A.size();
    if(N < 2){
        return N;
    }
    unsigned int i, ctr = 0;
    sort(A.begin(), A.end());
    for(i = 0; i < N-1; i++){
        if(A[i] == A[i+1]){
            ctr++; 
        }
    }
    return N-ctr;
}

