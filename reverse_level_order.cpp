/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(A);
    while(q.size()){
        int count=q.size();
        vector<int> temp;
        while(count--){
            TreeNode* curr=q.front();
            q.pop();
            temp.push_back(curr->val);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right)
                q.push(curr->right);
        }
        ans.push_back(temp);
    }
    reverse(ans.begin(),ans.end());
    vector<int> res;
    for(auto v:ans){
        for(auto t:v){
            res.push_back(t);
        }
    }
    return res;
}
