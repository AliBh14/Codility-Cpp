/* ● MissingInteger
Find the smallest positive integer that does not occur in a given sequence. */

#include <algorithm>

int solution(vector<int> &A) {
    unsigned int i, N = A.size();
    int min = 1;
    sort(A.begin(), A.end());
    for(i = 0; i < N; i++){
        if(A[i] == min){
            min++;            
        }else if(A[i] > min){
            return min;
        }
    }
    return min;
}
