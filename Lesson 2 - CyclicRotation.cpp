/* ● CyclicRotation
Rotate an array to the right by a given number of steps. */

#include <algorithm>

vector<int> solution(vector<int> &A, int K) {
    unsigned int vector_size = A.size();
    if(vector_size < 2){
        return A;
    }
    unsigned int rotation_number = K%vector_size;
    rotate(A.begin(), A.begin() + vector_size - rotation_number, A.end());
    return A;
}
