/* ● NumberOfDiscIntersections
Compute the number of intersections in a sequence of discs. */

#include <algorithm>

int solution(vector<int> &A) {
    int size = A.size(), i, j, ctr = 0;
    vector<int> lefts(size, 0); 
    vector<int> rights(size, 0); 
    for(i = 0; i < size; i++){
        lefts[i] = i - A[i];
        if(A[i] <= 2147483647-i){
            rights[i] = i + A[i];
        }else{
            rights[i] = 2147483647;
        }
    }
		
	sort(lefts.begin(), lefts.end());
    sort(rights.begin(), rights.end());	
		
    for(i = 0; i < size-1; i++){
        for(j = i+1; j < size; j++){
            if((lefts[j] <= rights[i])){
                ctr++;
            }else {
                break;
            }
        }
    }
    if(ctr > 10000000){
        return -1;
    }else{
        return ctr;
    }
}
