/* ● StoneWall
Cover "Manhattan skyline" using the minimum number of rectangles. */

#include <stack>

int solution(vector<int> &H) {
    unsigned int size = H.size(), i, ctr = 0;
    stack<int> block;
    for (i = 0; i < size; i++) {
        while (!block.empty() && H[i] < block.top()) {
            block.pop();
        }
        if (block.empty() || H[i] > block.top()) {
            block.push(H[i]);
            ctr++;
        }
    }
    return ctr;
}
