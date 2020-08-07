
void backtrack(vector<vector<int>>& res,vector<int>& vec,vector<int>& inp,int B,int idx){
    if(vec.size()==B){
        res.push_back(vec);
        return;
    }
    for(int i=idx;i<inp.size();i++){
        vec.push_back(inp[i]);
        backtrack(res,vec,inp,B,i+1);
        vec.pop_back();
    }
    return ;
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> inp;
    for(int i=1;i<=A;i++){
        inp.push_back(i);
    }
    vector<int> vec;
    vector<vector<int>> res;
    backtrack(res,vec,inp,B,0);
    return res;
}
