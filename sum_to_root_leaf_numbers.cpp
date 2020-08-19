/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void dfs(vector<vector<int>>& res,vector<int>& vec,TreeNode* A){
    if(A==NULL){
        return;
    }
    
    vec.push_back(A->val);
    if(A->left==NULL && A->right==NULL){
        res.push_back(vec);
           
    }
    dfs(res,vec,A->left);
    dfs(res,vec,A->right);
    vec.pop_back();
    return;
}
int Solution::sumNumbers(TreeNode* A) {
    vector<vector<int>> res;
    vector<int> vec;

    dfs(res,vec,A);
    int sum=0;
    for(auto v:res){
        int mul=1;
        int add=0;
        reverse(v.begin(),v.end());
        for(auto dig:v){
            add=add%1003+(dig*mul)%1003;
            mul=(mul*10)%1003;
        }
        add=add%1003;
        sum+=add;
    }
    sum=sum%1003;
    return sum;
}
