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
    vector<int>temp;
    void fun(TreeNode* node){
        if(node == NULL){
            return;
        }
        fun(node->left);
        temp.push_back(node->val);
        fun(node->right);
    }

    bool findTarget(TreeNode* root, int k) {
        fun(root);
        int n =temp.size();
        int low =0;
        int high =n-1;
        while(low<high){
            if(temp[low]+temp[high]==k)return true;
            else if(temp[low]+temp[high] >k)high--;
            else{
                low++;
            }

        }
        return false;
        
    }
};