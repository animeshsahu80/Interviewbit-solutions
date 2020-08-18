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
    queue<TreeNode*> q;
    vector<int> res;
    q.push(A);
    while(q.size()){
        int count=q.size();
        int k=0;
        while(count--){
            TreeNode* curr=q.front();
            if(count==0)
                res.push_back(curr->val);
            q.pop();
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
    return res;
}
