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
    int ans = 0;
    int maxAncestorDiff(TreeNode* root) {
        return solve(root, INT_MAX, INT_MIN);
    }
    int solve (TreeNode* node, int mn, int mx) {
        if (node == nullptr) return abs(mx - mn);
        // keep checking for the maximum value every itereation
        mx = max(mx, node->val);
        // keep checking for the minimum value every itereation
        mn = min(mn, node->val);
        // then return the max between the right and the left childs
        return max(solve(node->left, mn, mx), solve(node->right, mn, mx));
    }
};