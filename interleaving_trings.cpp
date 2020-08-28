
bool solve(string A,string B,string C){
    if(A.empty() && B.empty() && C.empty()){
        return true;
    }
    if(C.empty())
        return false;
    bool a= (A.size()>0 && A[0]==C[0] && solve(A.substr(1),B,C.substr(1)));
    bool b= (B.size()>0 && B[0]==C[0] && solve(A,B.substr(1),C.substr(1)));

    return a|| b;
}

int Solution::isInterleave(string A, string B, string C) {
    bool ans=solve(A,B,C);
    return ans;
}
