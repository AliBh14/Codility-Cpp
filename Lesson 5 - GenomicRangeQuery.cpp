/* ● GenomicRangeQuery
Find the minimal nucleotide from a range of sequence DNA. */

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    unsigned int i, len = S.length(), M = P.size();
    vector<int> a(len, 0);
    vector<int> c(len, 0);
    vector<int> g(len, 0);
    vector<int> t(len, 0);
    vector<int> result;

    if(S[0] == 'A'){
        a[0] = 1;
    }else if(S[0] == 'C'){
        c[0] = 1;
    }else if(S[0] == 'G'){
        g[0] = 1;
    }else if(S[0] == 'T'){
        t[0] = 1;
    }

    for (i = 1; i < len; i++) {
        switch(S[i]){
            case 'A':
                a[i] = 1;
                break;
            case 'C':
                c[i] = 1;
                break;
            case 'G':
                g[i] = 1;
                break;
            case 'T':
                t[i] = 1;
                break;
        }
        a[i] += a[i-1];
        c[i] += c[i-1];
        g[i] += g[i-1];
        t[i] += t[i-1];
    }
    
    for(i = 0; i < M; i++){
        if(a[Q[i]] > a[P[i]] || S[P[i]] == 'A'){
            result.push_back(1);
        }else if(c[Q[i]] > c[P[i]] || S[P[i]] == 'C'){
            result.push_back(2);
        }else if(g[Q[i]] > g[P[i]] || S[P[i]] == 'G'){
            result.push_back(3);
        }else if(t[Q[i]] > t[P[i]] || S[P[i]] == 'T'){
            result.push_back(4);
        }
    }
    return result;
}
