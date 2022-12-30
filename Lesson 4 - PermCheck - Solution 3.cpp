/* ● PermCheck
Check whether array A is a permutation. */

#include <algorithm>

int solution(vector<int> &A) {
    int i, N = A.size();
    if(N == 0){
        return 0;
    }
    sort(A.begin(), A.end());
    for (i = 0; i < N; i++) {
        if(A[i] != (i+1)){
            return 0;
        }
    }
    return 1;
}
