/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


int Solution::t2Sum(TreeNode* A, int B) {
    int flag=0; 
    queue<TreeNode*> q;
    q.push(A);
    set<int> s;
    while(q.size()){
        int count=q.size();
        while(count--){
            TreeNode* curr=q.front();
            if(s.find(B-curr->val)!=s.end())
                return 1;
            else
                s.insert(curr->val);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
            q.pop();
        }
    }
    return 0;
}
