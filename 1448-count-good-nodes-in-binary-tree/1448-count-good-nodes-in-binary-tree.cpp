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
    void fun(TreeNode* node,int gnode){
        if(node==NULL)return;
        if(node->val >=gnode){
            res++;
        }
        gnode = max(gnode,node->val);
        fun(node->left,gnode);
        fun(node->right,gnode);
        
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int gnode =root->val;
        fun(root,gnode);
        return res;
    }
};