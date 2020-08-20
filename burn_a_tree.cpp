/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 TreeNode* root;
void dfs(TreeNode* A,int B,map<TreeNode*,TreeNode*>& parent,TreeNode* par){
    if(A==NULL)
        return;
    parent[A]=par;
    if(A->val==B)
        root=A;
    dfs(A->left,B,parent,A);
    dfs(A->right,B,parent,A);
} 

int Solution::solve(TreeNode* A, int B) {
    queue<pair<TreeNode*,int>> q;
    map<TreeNode*,int> visited;
    map<TreeNode*,TreeNode*> parent;

    dfs(A,B,parent,NULL);
    visited[root]=1;

    q.push(make_pair(root,0));
    int ans=1;
    while(q.size()){
        auto pr=q.front();
        q.pop();
        TreeNode* curr=pr.first;
        int level=pr.second;
        ans=max(level,ans);
        if(curr->left and not visited[curr->left]){
            visited[curr->left]=1;
            q.push(make_pair(curr->left,level+1));
        }
        if(curr->right and not visited[curr->right]){
            visited[curr->right]=1;
            q.push(make_pair(curr->right,level+1));
        }
        if(parent[curr] and not visited[parent[curr]]){
            visited[parent[curr]]=1;
            q.push(make_pair(parent[curr],level+1));
        }
    }
    return ans;
}
