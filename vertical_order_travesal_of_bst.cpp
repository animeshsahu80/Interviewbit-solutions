/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 


void traverse(TreeNode* A,int row,int col,map<int,map<int,vector<int>>>& mp){
    if(A==NULL)
        return;
    mp[col][row].push_back(A->val);
    traverse(A->left,row+1,col-1,mp);
    traverse(A->right,row+1,col+1,mp);
}
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    map<int,map<int,vector<int>>> mp;
    traverse(A,0,0,mp);
    vector<vector<int>> ans;
    for(auto col: mp){
          vector<int>temp;
        for(auto mp1:col.second){
          
            for(auto s:mp1.second){
                temp.push_back(s);
            }
           
        }
        
        ans.push_back(temp);
    }
    return ans;
}
