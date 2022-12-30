/* ● PassingCars
Count the number of passing cars on the road. */

int solution(vector<int> &A) {
    unsigned int i, N = A.size(), pairs = 0, east = 0;
    for (i = 0; i < N; i++) {
        if (A[i] == 1) {
            pairs += east;
        }else {
            east++;
        }
    }
    if(pairs <= 1000000000){
        return pairs;
    }else{
        return -1;
    }
}
