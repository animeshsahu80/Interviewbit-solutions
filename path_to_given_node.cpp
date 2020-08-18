/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
bool dfs(vector<int>& res,TreeNode* A,int B){
    if(A==NULL)
        return false;
    if(A->val==B || dfs(res,A->left,B) || dfs(res,A->right,B)){
        res.push_back(A->val);
        return true;
    }
    return false;
        
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> res;
    bool flag=dfs(res,A,B);
    reverse(res.begin(),res.end());
    return res;
}
