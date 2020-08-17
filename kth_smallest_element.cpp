/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int smallest;
 void inorder(TreeNode* A,int& B){
     if(A==NULL)
        return ;
    inorder(A->left,B);
    B--;
    if(B==0){
        smallest=A->val;
        return;
    }
    
    inorder(A->right,B);
 }
int Solution::kthsmallest(TreeNode* A, int B) {
    inorder(A,B);
    return smallest;
}
