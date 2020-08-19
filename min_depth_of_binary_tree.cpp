/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if(A==NULL)
        return 0;
    if(A->left==NULL && A->right==NULL)
        return 1;
    int ld,rd;
    if(A->left==NULL)
        ld=INT_MAX;
    else 
        ld=minDepth(A->left);
    if(A->right==NULL)
        rd=INT_MAX;
    else
        rd=minDepth(A->right);
    return 1 + min(ld,rd);
}
