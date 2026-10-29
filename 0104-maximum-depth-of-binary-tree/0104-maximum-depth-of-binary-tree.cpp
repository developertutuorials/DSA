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
    int res =0;
    void fun(TreeNode* node,int step){
        if(node==NULL)return;
        step++;
        if(node->left==NULL and node->right==NULL){
            res=max(res,step);
        }
        fun(node->left,step);
        fun(node->right,step);
    }
    int maxDepth(TreeNode* root) {
        fun(root,0);
        return res;
    }
};