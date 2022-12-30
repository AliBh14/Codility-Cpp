/* ● PermMissingElem
Find the missing element in a given permutation. */

#include <algorithm>

int solution(vector<int> &A) {
    int i, N = A.size();
    if (N == 0) {
        return 1;
    }
    sort(A.begin(), A.end());
    if(A[0] != 1){
        return 1;
    }
    if(A[N-1] != (N+1)){
        return (N+1);
    }
    for(i = 0; i < N; i++){
        if(A[i+1] != (A[i]+1)){
            return A[i]+1;
        }
    }
}

