/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* A) {
    if(A==NULL)
        return NULL;
    TreeNode* node=A->left;
    A->left=A->right;
    A->right=node;
    invertTree(A->right);
    invertTree(A->left);
    return A;
}
