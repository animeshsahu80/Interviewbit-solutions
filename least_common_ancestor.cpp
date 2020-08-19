/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* solve(TreeNode* A, int B, int C){
    if(A==NULL)
        return NULL;
    if(A->val==B || A->val==C)
        return A;
    TreeNode* l=solve(A->left,B,C);
    TreeNode* r=solve(A->right,B,C);
    if(l&&r)
        return A;
    else if(l && r==NULL)
        return l;
    else
        return r;
}
bool search(TreeNode* A,int val){
    if(A==NULL)
        return false;
    if(A->val==val)
        return true;
    return search(A->left,val) || search(A->right,val);
}
int Solution::lca(TreeNode* A, int B, int C) {
    TreeNode* ans;
    if(search(A,B)&& search(A,C))
        ans=solve(A,B,C);
    else
        return -1;
    return ans->val;
}
