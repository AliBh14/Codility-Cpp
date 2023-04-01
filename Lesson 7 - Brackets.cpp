/* ● Brackets
Determine whether a given string of parentheses (multiple types) is properly nested. */

#include <stack>

int solution(string &S) {
    unsigned int i, n = S.length();
    stack<char> nb;
    for(i = 0; i < n; i++){
        if(nb.empty() && (S[i] == ')' || S[i] == ']' || S[i] == '}')){
            return 0;
        }
        switch (S[i]) {
            case ')':
                if(nb.top() == '('){
                    nb.pop();
                }else {
                    nb.push(')');
                }
                break;
            case '}':
                if(nb.top() == '{'){
                    nb.pop();
                }else {
                    nb.push('}');
                }
                break;
            case ']':
                if(nb.top() == '['){
                    nb.pop();
                }else {
                    nb.push(']');
                }
                break;
            default:
                nb.push(S[i]);
        }
    }
    return !(nb.size() > 0);
}
