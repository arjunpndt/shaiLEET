class Solution {
private:
    int Greater(TreeNode* root , int sum)
    {
        if(!root) return sum;
        // find right sum in sR   
        int sR = Greater(root->right,sum);
        // Update our root val
        root->val += sR;
        // Pass this sum in Left subtree and get sum of left side in sL
        int sL = Greater(root->left, root->val);
        // return sL
        return sL;
    }
public:
    TreeNode* convertBST(TreeNode* root) 
    {
        int sum=0;
        Greater(root,sum);
        return root;
    }
};