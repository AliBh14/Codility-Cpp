/* ● Distinct
Compute number of distinct values in an array. */

#include <set>

int solution(vector<int> &A) {
    set<int> tmp(A.begin(), A.end());
    return tmp.size();
}
