void backtrack(vector<string>& res,string& s,int open,int close,int A){
    if(open==0 && close==0){
        res.push_back(s);
        return;
    }
    if(open!=0){
        s+='(';
        backtrack(res,s,open-1,close,A);
        s.pop_back();
    }
    if(close>open){
        s+=')';
        backtrack(res,s,open,close-1,A);
        s.pop_back();
    }
    return;
}


vector<string> Solution::generateParenthesis(int A) {
    int open=A;
    int close=A;
    vector<string> res;
    string s="";
    backtrack(res,s,open,close,A);
    return res;
}
