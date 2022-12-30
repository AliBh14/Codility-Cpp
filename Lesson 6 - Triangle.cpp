/* ● Triangle
Determine whether a triangle can be built from a given set of edges. */

#include <algorithm>

int solution(vector<int> &A) {
    unsigned int n = A.size(), i;
    if(n < 3){
        return 0;
    }
    sort(A.begin(), A.end());
    vector<long> B(A.begin(), A.end());
    for(i = 0; i < n-2; i++){
        if(B[i] > B[i+2] - B[i+1]){
            return 1;
        }
    }
    return 0;
}
