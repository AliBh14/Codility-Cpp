/* ● FrogRiverOne
Find the earliest time when a frog can jump to the other side of a river. */

int solution(int X, vector<int> &A) {
    unsigned int i, size = A.size();
    int num = 0;
    vector<int> B(X, 0);
    for(i = 0; i < size; i++){
        if(B[A[i]-1] == 0){
            num++;
            B[A[i]-1] = 1;
        }
        if(num == X){
            return i;
        }
    }
    return -1;
}
