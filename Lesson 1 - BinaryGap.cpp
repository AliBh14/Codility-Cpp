/* ● BinaryGap
Find longest sequence of zeros in binary representation of an integer. */

int solution(int N) {
    int i, max_bin = 0;
    int pos1 = -1, pos2 = -1;
	
    for(i = 0; i < 32; i++){
        if(((N >> i) & 1) == 1){
            if(pos1 != -1){
                pos2 = i;
                if (pos2-pos1-1 > 0 && pos2-pos1-1 > max_bin) {
                    max_bin = pos2-pos1-1;
                }
                pos1 = pos2;
            }else{
                pos1 = i;
            }
        }
    }
    return max_bin;
}
