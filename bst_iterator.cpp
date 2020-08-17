/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
stack<TreeNode*> s;

void fill(TreeNode *root){
    while(root){
        s.push(root);
        root=root->left;
    }
    return;
}

BSTIterator::BSTIterator(TreeNode *root) {
    fill(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(s.size()==0)
        return false;
    return true;
}

/** @return the next smallest number */
int BSTIterator::next() {
    TreeNode* temp=s.top();
    s.pop();
    fill(temp->right);
    return temp->val;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
