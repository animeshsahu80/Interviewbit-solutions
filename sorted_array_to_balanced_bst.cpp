/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* solve(vector<int> & res,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=s + (e-s)/2;
    TreeNode* root=new TreeNode(res[mid]);
    root->left=solve(res,s,mid-1);
    root->right=solve(res,mid+1,e);
    return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    vector <int> res=A;
    TreeNode* root=solve(res,0,A.size()-1);

    return root;
}
