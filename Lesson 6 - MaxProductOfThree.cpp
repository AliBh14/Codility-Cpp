/* ● MaxProductOfThree
Maximize A[P] * A[Q] * A[R] for any triplet (P, Q, R). */

#include <algorithm>

int solution(vector<int> &A) {
    unsigned int N = A.size();
    sort(A.begin(), A.end());
    return max(A[0]*A[1]*A[N-1], A[N-1]*A[N-2]*A[N-3]);
}
