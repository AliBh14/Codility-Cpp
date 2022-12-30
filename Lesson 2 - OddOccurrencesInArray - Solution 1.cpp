/* ● OddOccurrencesInArray
Find value that occurs in odd number of elements. */

#include <algorithm>

int solution(vector<int> &A) {
    unsigned int i, vec_size = A.size();
    if (vec_size == 1) {
        return A[0];
    }
    sort(A.begin(), A.end());
    for (i = 0; i < vec_size-1; i = i+2) {
        if (A[i] != A[i+1] && i != vec_size-1) {
            return A[i];
        }
    }
    return A[vec_size-1];
}
