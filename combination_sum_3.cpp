class Solution {
public:
    void backtrack(vector<vector<int>>& res,vector<int> &vec,vector<int>& inp,int k,int n,int idx){
        if(n<0)
            return;
        if(n==0 && vec.size()==k){
            res.push_back(vec);
            return;
        }
        for(int i=idx;i<inp.size();i++){
            vec.push_back(inp[i]);
            backtrack(res,vec,inp,k,n-inp[i],i+1);
            vec.pop_back();
        }
        return;
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> vec;
        vector<int> inp;
        for(int i=1;i<=9;i++){
            inp.push_back(i);
        }
        backtrack(res,vec,inp,k,n,0);
        return res;
    }
};