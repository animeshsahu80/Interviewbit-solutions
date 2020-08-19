/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void backtrack(TreeNode* A,int B,vector<vector<int>>& res,vector<int>& vec){
    if(A==NULL)
        return;
    vec.push_back(A->val);
    if(A->left==NULL && A->right==NULL && B-A->val==0){
        res.push_back(vec);
        //return;
    }
    backtrack(A->left,B-A->val,res,vec);
    backtrack(A->right,B-A->val,res,vec);
    vec.pop_back();
    return;
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<int> vec;
    vector<vector<int>> res;
    backtrack(A,B,res,vec);
    return res;
}
