/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int solve(TreeNode* A,TreeNode* B){
    if(A==NULL && B==NULL)
        return 1;
    if(A && B && A->val == B->val && solve(A->left,B->right) && solve(A->right,B->left))
        return 1;
    return 0;
}
int Solution::isSymmetric(TreeNode* A) {
    return solve(A,A);
}
