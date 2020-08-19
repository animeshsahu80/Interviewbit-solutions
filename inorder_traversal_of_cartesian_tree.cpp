/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* build(vector<int> &A,int s,int e){
    if(s>e)
        return NULL;
    int m=INT_MIN;
    int idx=0;
    for(int i=s;i<=e;i++){
        if(A[i]>m){
            m=A[i];
            idx=i;
        }
    }
    TreeNode* root=new TreeNode(A[idx]);
    root->left=build(A,s,idx-1);
    root->right=build(A,idx+1,e);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A) {
    TreeNode *root=build(A,0,A.size()-1);
    return root;
}
