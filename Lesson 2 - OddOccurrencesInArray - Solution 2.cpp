/* ● OddOccurrencesInArray
Find value that occurs in odd number of elements. */

#include <algorithm>

int solution(vector<int> &A) {
    unsigned int i, odd_occ = 0, vec_size = A.size();
    for (i = 0; i < vec_size; i++) {
        odd_occ ^= A[i];
    }
    return odd_occ;
}
