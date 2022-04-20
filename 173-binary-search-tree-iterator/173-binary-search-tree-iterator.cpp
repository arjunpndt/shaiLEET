class BSTIterator {
public:
    stack<TreeNode*>s;
    
    BSTIterator(TreeNode* root) {
        
        addall(root);
    }
    
    int next() {
        TreeNode* node=s.top();
        s.pop();
        addall(node->right);
        return node->val;
        
    }
    
    bool hasNext() {
        
        return !s.empty();
        
    }
    
    void addall(TreeNode* root){
        while(root!=NULL){
            s.push(root);
        root=root->left;
        }
    }
    
};