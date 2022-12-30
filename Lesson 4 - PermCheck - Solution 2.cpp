/* ● PermCheck
Check whether array A is a permutation. */

int solution(vector<int> &A) {
    int i, N = A.size(), result = 0;
    for (i = 0; i < N; i++) {
        result ^= (i+1) ^ A[i];
    }
    return !result;
}
