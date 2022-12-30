/* ● MinAvgTwoSlice
Find the minimal average of any slice containing at least two elements. */

int solution(vector<int> &A) {
    unsigned int i, N = A.size(), idx = 0;
    float ave = 100000;
    for (i = 0; i < N-1; i++) {
        if ((A[i]+A[i+1]) < 2*ave) {
            ave = (A[i]+A[i+1])/2.0;
            idx = i;
        }
    }
    for (i = 0; i < N-2; i++) {
        if ((A[i]+A[i+1]+A[i+2]) < 3*ave) {
            ave = (A[i]+A[i+1]+A[i+2])/3.0;
            idx = i;
        }
    }
    return idx;
}
