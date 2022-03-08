/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a={};
       
        fnc(root,a);
        return a;
    }
    void fnc(TreeNode *x,vector<int> &a)
    {
         if(!x)
            return ;
        a.push_back(x->val);
        fnc(x->left,a);
        fnc(x->right,a);   }
};