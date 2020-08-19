/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* build(vector<int> &A, vector<int> &B,int in_s,int in_e,int pr_s,int pr_e){
    if(in_s>in_e || pr_s>pr_e){
        return NULL;
    }
    int root_val=A[pr_s];
    int root_idx=-1;
    for(int i=in_s;i<=in_e;i++){
        if(B[i]==root_val){
            root_idx=i;
            break;
        }
    }
    int l_in_s=in_s;
    int l_in_e=root_idx-1;
    int r_in_s=root_idx+1;
    int r_in_e=in_e;
    int l_pr_s=pr_s +1;
    int l_pr_e=l_pr_s+ l_in_e-l_in_s;
    int r_pr_s=l_pr_e+1;
    int r_pr_e=pr_e;
    TreeNode *root=new TreeNode(root_val);
    
    root->right=build(A,B,r_in_s,r_in_e,r_pr_s,r_pr_e);
    root->left=build(A,B,l_in_s,l_in_e,l_pr_s,l_pr_e);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int n=A.size();
    return build(A,B,0,n-1,0,n-1);
}
