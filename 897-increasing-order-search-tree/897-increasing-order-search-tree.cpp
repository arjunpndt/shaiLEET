class Solution {
public:
    TreeNode* ans = new TreeNode(); // Create a new TreeNode to store the values (nodes) of answer
    TreeNode* dummy = ans;  // It will have the pointer of ans, to traverse 
    void func(TreeNode* root){
            if(root==NULL) return; // Base Condition
            func(root->left);   
            TreeNode* newNode = new TreeNode(root->val); // Create a newNode to store the value of root 
            dummy->right = newNode; // assign that newNode to the dummy right
            dummy = dummy->right;  // Move dummy into right direction
            func(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
       func(root);
       return ans->right;
    }
};