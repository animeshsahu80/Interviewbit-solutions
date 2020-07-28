vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {

    int a=A.size()-1;
    int b=B.size()-1;
    vector<int>  res;
    while(a>=0 && b>=0){
        if(A[a]==B[b]){
            res.push_back(A[a]);
            a--;
            b--;
        }
        if(A[a]>B[b]){
            a--;
        }
        if(A[a]<B[b])
            b--;
    }
    reverse(res.begin(),res.end());
    return res;
}
