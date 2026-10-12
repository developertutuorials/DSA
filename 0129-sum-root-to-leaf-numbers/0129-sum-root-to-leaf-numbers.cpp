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
 
    int fun(TreeNode* node,int sum){
        if(node==NULL){
            return 0;

        }
        sum = (10*sum)+node->val;
        if(node->left==NULL and node->right==NULL){
            return sum;
        }
        int left =fun(node->left,sum);
        int right =fun(node->right,sum);
        int total=left+right;

        return total;
    }
    int sumNumbers(TreeNode* root) {
        int ans=fun(root,0);
        return ans;
    }
};