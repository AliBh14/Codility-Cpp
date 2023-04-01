/* ● Nesting
Determine whether a given string of parentheses (single type) is properly nested. */

#include <stack>

int solution(string &S) {
    unsigned int len = S.length(), i;
    if(len == 0){
        return 1;
    }
    if (len%2 != 0) {
        return 0;
    }
    stack<char> p; 
    for (i = 0; i < len; i++) {
        if (S[i] == ')') {
            if (p.empty()) {
                return 0;
            }
            if (p.top() == '(') {
                p.pop();
            }else{
                return 0;
            }
        }else {
            p.push('(');
        }
    }
    return (p.empty());
}
