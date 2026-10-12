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
    int res=INT_MAX;
    int fun(TreeNode* node,int step){
        if(node==NULL){
            return 0;
        }
        step++;
        if(node->left==NULL and node->right==NULL){
            res=min(step,res);
        }
        fun(node->left,step);
        fun(node->right,step);
        return step;
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        fun(root,0);

        return res;
    }
};