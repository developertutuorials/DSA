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
    int res = 0;

    int fun(TreeNode* node, int step) {
        if (node == NULL) {
            return 0;
        }

        step++;

        int left = fun(node->left, step);
        int right = fun(node->right, step);

        if (abs(left - right) > 1) {
            res = 1;
        }

        return step = max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;

        fun(root, 0);

        return (res == 0) ? true : false;
    }
};