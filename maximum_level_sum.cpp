/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode* A) {
    queue<TreeNode*> q;
    q.push(A);
    int ans=INT_MIN;
    while(q.size()){
        int count=q.size();
        int temp=0;
        while(count--){
            TreeNode* curr=q.front();
            temp+=curr->val;
            q.pop();
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        if(temp>ans)
            ans=temp;
    }
    return ans;
}
