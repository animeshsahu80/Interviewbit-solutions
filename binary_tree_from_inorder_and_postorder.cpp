/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* build(vector<int> &A, vector<int> &B,int in_s,int in_e,int po_s,int po_e){
    if(in_s>in_e || po_s>po_e){
        return NULL;
    }
    int root_idx;
    int root=B[po_e];
    for(int i=in_s;i<=in_e;i++){
        if(A[i]==root){
            root_idx=i;
            break;
        }
    }
    int l_in_s=in_s;
    int l_in_e=root_idx-1;
    int r_in_s=root_idx+1;
    int r_in_e=in_e;
    int l_po_s=po_s;
    int l_po_e=po_s + l_in_e-l_in_s;
    int r_po_s=l_po_e +1;
    int r_po_e=po_e-1;
    TreeNode* main=new TreeNode(root);
    main->left=build(A,B,l_in_s,l_in_e,l_po_s,l_po_e);
    main->right=build(A,B,r_in_s,r_in_e,r_po_s,r_po_e);
    return main;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int n=A.size();
    return build(A,B,0,n-1,0,n-1);
}

