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
    int fun(TreeNode* node,int step){
        if(node==NULL){
            return 0;
        }
        step++;
        if(node->left==NULL and node->right==NULL){
            res=max(step,res);
        }
        fun(node->left,step);
        fun(node->right,step);
        return step;
    }
    int maxDepth(TreeNode* root) {
        fun(root,0);
        return res;
    }
};