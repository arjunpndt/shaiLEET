class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return nullptr; // if root is empty then return empty node means nullptr
        if(root->val>val) return searchBST(root->left,val); // if root value is greater than search value then search in left subtree 
        if(root->val<val) return searchBST(root->right,val); // if root value is less than search value then search in right subtree 
        return root; // if it is neither great nor less then return that node (means you have found that element so return that)
    }
};