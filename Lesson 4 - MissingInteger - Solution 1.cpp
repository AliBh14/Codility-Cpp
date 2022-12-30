/* ● MissingInteger
Find the smallest positive integer that does not occur in a given sequence. */

int solution(vector<int> &A) {
    int i, N = A.size(), present = 0;
    vector<int> B(1000000, 0);
    for (i = 0; i < N; i++) {
        if (A[i] > 0) {
            present = 1;
            B[A[i]] = 1;
        }
    }
    if (present == 0) {
        return 1;
    }
    for (i = 1; i < 1000000; i++) {
        if (B[i] == 0) {
            return i;
        }
    }
    return -1;
}
