/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*> st;
    TreeNode* curr=A;

    vector<int>res;
    while(1){
        while(curr){
            st.push(curr);
            curr=curr->left;
        }
        if(st.size()==0)
            break;
        TreeNode* temp=st.top();
        st.pop();
        res.push_back(temp->val);
        curr=temp->right;
    }
    return res;
}
