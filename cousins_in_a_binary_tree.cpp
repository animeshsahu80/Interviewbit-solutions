/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A, int B) {
    queue<TreeNode*> q;
    map<int,int> mp;
    q.push(A);
    mp[A->val]=INT_MIN;
    vector<int> vec;
    while(q.size()){
        int count=q.size();
        int flag=0;
        
        while(count--){
            TreeNode* temp=q.front();
            vec.push_back(temp->val);
            q.pop();
            if(temp->val==B)
                flag=1;
            if(temp->left){
                q.push(temp->left);
                mp[temp->left->val]=temp->val;
            }
            if(temp->right){
                q.push(temp->right);
                mp[temp->right->val]=temp->val;
            }
        }
        if(flag==0)
            vec.clear();
        else
            break;
    }
    int parent=mp[B];
    vector<int> res;
    for(auto num:vec){
        if(mp.find(num)!=mp.end()){
            if(mp[num]!=parent){
                res.push_back(num);
            }
        }
    }
    return res;
}
