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
    int res =0;
    void fun(TreeNode* node,int k){
        if(node==NULL){
            return;
        }
        fun(node->left,k);
        ans++;
        if(ans==k){
            res=node->val;
            return;
        }
        fun(node->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
     
        fun(root,k);
        return res;
        
    }
};