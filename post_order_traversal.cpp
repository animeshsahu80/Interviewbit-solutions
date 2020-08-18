/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode*> st;
    stack<int> ans;
    st.push(A);
    vector<int> res;
    while(st.size()){
        TreeNode* temp=st.top();
        st.pop();
        ans.push(temp->val);
        if(temp->left)
            st.push(temp->left);
        if(temp->right)
            st.push(temp->right);
    }
    while(ans.size()){
        res.push_back(ans.top());
        ans.pop();
    }
    return res;
}
