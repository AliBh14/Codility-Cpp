/* ● Fish
N voracious fish are moving along a river. Calculate how many fish are alive. */

#include <stack>

int solution(vector<int> &A, vector<int> &B) {
    unsigned int N = A.size(), i;
    stack<int> fish;
    for (i = 0; i < N; i++) {
        if(B[i] == 0){
            while (!fish.empty() && B[fish.top()] == 1 && A[fish.top()] < A[i]) {
                fish.pop();
            }
            if (fish.empty() || B[fish.top()] == 0 || A[fish.top()] < A[i]) {
                fish.push(i);
            }
        }else{
            fish.push(i);
        }
    }
    return fish.size();
}
