/* ● TapeEquilibrium
Minimize the value |(A[0] + ... + A[P-1]) - (A[P] + ... + A[N-1])|. */

int solution(vector<int> &A) {
    unsigned int vec_size = A.size();
    unsigned int i = 0;
    int min = 1001;
    if(vec_size == 2){
        return abs(A[0]-A[1]);
    }
    for (i = 1; i < vec_size; i++){
        A[i] = A[i] + A[i-1];
    }
    for (i = 1; i < vec_size; i++){
        if (abs(A[vec_size-1] - (2*A[i-1])) < min) {
            min = abs(A[vec_size-1] - (2*A[i-1]));
        }
    }
    return min;
}
