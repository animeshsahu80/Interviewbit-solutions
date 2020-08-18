/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    queue<TreeNode*> q;
    vector<vector<int>> vec;
    int level=0;
    q.push(A);
    while(q.size()){
        int count=q.size();
        vector<int> temp;
        while(count--){
            TreeNode* curr=q.front();
            q.pop();
            temp.push_back(curr->val);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        if(level%2==1)
            reverse(temp.begin(),temp.end());
        level++;
        vec.push_back(temp);
    }
    return vec;
}
