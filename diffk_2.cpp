int Solution::diffPossible(const vector<int> &A, int B) {
    set<int> s;
    for(int i=0;i<A.size();i++){
        int diff=B+A[i];
        int diff2=-B+A[i];
        if(s.find(diff)!=s.end() || s.find(diff2)!=s.end()){
            return 1;
        }
        else
        s.insert(A[i]);
    }
    return 0;
}
