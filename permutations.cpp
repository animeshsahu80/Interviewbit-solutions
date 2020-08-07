

void backtrack(vector<int> &A,vector<vector<int>> &res,vector<int> &vec,vector<bool> &visited){
    if(vec.size()==A.size()){
        res.push_back(vec);
        return;
    }    
    for(int i=0;i<A.size();i++){
        if(visited[i])
            continue;
        visited[i]=true;
        vec.push_back(A[i]);
        backtrack(A,res,vec,visited);
        vec.pop_back();
        visited[i]=false;
    }
    return;
}


vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<bool> visited(A.size(),false);
    vector<int>  vec;
    vector<vector<int>> res;
    backtrack(A,res,vec,visited);
    return res;
    
}
