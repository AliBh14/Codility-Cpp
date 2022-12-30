/* ● PermCheck
Check whether array A is a permutation. */

int solution(vector<int> &A) {
    int i, N = A.size();
    vector<int> B(N, 0);
    for (i = 0; i < N; i++) {
        if(A[i] >= 1 && A[i] <= N){
            B[A[i]-1] = 1;
        }else {
            return 0;
        }
    }
    for (i = 0; i < N; i++) {
        if (B[i] == 0) {
            return 0;
        }
    }
    return 1;
}
