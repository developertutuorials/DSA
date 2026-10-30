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
    
    bool ans = true;
    TreeNode* prev =NULL;
    void fun(TreeNode* node){
        if(node==NULL)return;
        fun(node->left);
        if(prev==NULL){
            prev=node;
        }
        else{
            if(prev->val >= node->val){
                ans=false;
            }
            prev =node;
        }
        fun(node->right);
    }
    bool isValidBST(TreeNode* root) {
       fun(root);
       return ans;

    }
};