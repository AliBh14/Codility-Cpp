/* ● FrogRiverOne
Find the earliest time when a frog can jump to the other side of a river. */

#include <algorithm>
#include <unordered_set>

int solution(int X, vector<int> &A) {
    unordered_set<int> uset(A.begin(), A.end());
    int uset_size = uset.size();
    if (uset_size != X){
        return -1;
    }
    vector<int> tmp;
    tmp.insert(tmp.end(), uset.begin(), uset.end());
    vector<int>::iterator it = find(A.begin(), A.end(), tmp[0]);
    return distance(A.begin(), it);
}
