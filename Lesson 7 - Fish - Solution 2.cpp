/* ● Fish
N voracious fish are moving along a river. Calculate how many fish are alive. */

int solution(vector<int> &A, vector<int> &B) {
    unsigned int i, N = A.size();
    vector<int> stack(N);
    int top = 0;
    stack[0] = top;
    for(i = 1; i < N; i++){
        if(B[i] == 0 && B[stack[top]] == 1){
            if(A[stack[top]] < A[i]){
                stack[top] = i;
            }else{
                continue;
            }
            while(top != 0 && (B[stack[top]] == 0 && B[stack[top-1]] == 1)){
                if(A[stack[top]] > A[stack[top-1]]){
                    top--;
                    stack[top] = stack[top+1];
                }else {
                    top--;
                    break;
                }
            }
        }else{
            top++;
            stack[top] = i;
        }
    }
    return top+1;
}
