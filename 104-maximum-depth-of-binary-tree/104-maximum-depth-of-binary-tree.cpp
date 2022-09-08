class Solution {
public:
    int ans = 0;
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        return max(1 + maxDepth(root->left), 1 + maxDepth(root->right));
        
    }
};