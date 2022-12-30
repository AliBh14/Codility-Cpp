/* ● PermCheck
Check whether array A is a permutation. */

#include <set>

int solution(vector<int> &A) {
    int vec_size = A.size();
    set<int> tmp(A.begin(), A.end());
    if(tmp.size() == vec_size && (*next(tmp.begin(), 0) == 1) && (*next(tmp.begin(), (vec_size-1)) == vec_size)){
        return 1;
    }
    return 0;
}
