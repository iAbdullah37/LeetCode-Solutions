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
    vector<int> in_order;
    bool isValidBST(TreeNode* root) {
        if (root != nullptr) {
            isValidBST(root->left);
            in_order.push_back(root->val);
            isValidBST(root->right);
        }
        for (int i = 1; i < in_order.size(); i++) {
            if(in_order[i] <= in_order[i-1]) return false;
        }
        return true;
    }
};