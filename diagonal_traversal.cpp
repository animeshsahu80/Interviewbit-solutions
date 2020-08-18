/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void preorder(TreeNode* A,int y,map<int,vector<int>>& res){
    if(A==NULL)
        return ;
    res[y].push_back(A->val);
    preorder(A->left,y+1,res);
    preorder(A->right,y,res);
    return;
}
vector<int> Solution::solve(TreeNode* A) {
    map<int,vector<int>> res;
    preorder(A,0,res);
    vector<int> ans;
    for(auto vec:res){
        for(auto num:vec.second){
            ans.push_back(num);
        }
    }
    return ans;
}
