/* ● PermMissingElem
Find the missing element in a given permutation. */

#include <numeric>

int solution(vector<int> &A) {
    unsigned int size = A.size();
    int sum = accumulate(A.begin(), A.end(), 0);
    return ((size+1)*(size+2)/2)-sum;
}

