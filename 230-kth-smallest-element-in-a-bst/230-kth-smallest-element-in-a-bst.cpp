class Solution {
public:
    
    int out;
    int kthSmallest(TreeNode* root, int &k) {
        if(!root) return 0;
        kthSmallest(root->left, k);
        
        k--;
        if(k == 0) out = root->val;
        
        kthSmallest(root->right, k);
        
        return out;
    }
};