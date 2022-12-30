/* ● MissingInteger
Find the smallest positive integer that does not occur in a given sequence. */

#include <algorithm>
#include <set>

int solution(vector<int> &A) {
    auto it = remove_if(A.begin(), A.end(),  [](const int i) {return i < 1;});
    A.erase(it, A.end());
    if (A.size() == 0) {
        return 1;
    }
    set<int> B(A.begin(), A.end());
    vector<int> F(B.begin(), B.end());
    if (F[0] != 1) {
        return 1;
    }
    int i, vec_size = F.size();
    for (i = 1; i < vec_size; i++) {
        if (F[i] != i+1) {
            return i+1;
        }
    }
    return vec_size+1;
}
