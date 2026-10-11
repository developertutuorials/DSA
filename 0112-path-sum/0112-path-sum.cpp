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
    bool res= false;
    void fun(TreeNode* node,int sum,int t){
        if(node==NULL){
            return;
        }
        sum+=node->val;
        if(node->left==NULL and node->right==NULL){
            if(sum==t)res=true;
        }
        fun(node->left,sum,t);
        fun(node->right,sum,t);
        return;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        fun(root,0,targetSum);
        return res;
    }
};