void backtrack(vector<int> &A,vector<vector<int>> &res,vector<int> &vec,int target,int idx){
    if(target<0)
        return;
    if(target==0){
        res.push_back(vec);
        return;
    }
    for(int i=idx;i<A.size();i++){
        if(i!=idx && A[i]==A[i-1])
            continue;
        vec.push_back(A[i]);
        backtrack(A,res,vec,target-A[i],i+1);
        vec.pop_back();
        
    }
    return;
}


vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int target=B;
    vector<int> vec;
    vector<vector<int>> res;
    sort(A.begin(),A.end());
    backtrack(A,res,vec,target,0);
    return res;
}
