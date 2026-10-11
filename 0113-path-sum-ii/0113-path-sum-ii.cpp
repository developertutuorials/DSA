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
    void fun(TreeNode* node,int sum,int t,vector<vector<int>> &res){
        if(node==NULL){
            return;
        }
        sum+=node->val;
        temp.push_back(node->val);
        if(node->left==NULL and node->right==NULL){
            if(sum==t){
                res.push_back(temp);
            }
            
  
        }
        fun(node->left,sum,t,res);
        fun(node->right,sum,t,res);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>>res;
        fun(root,0,targetSum,res);
        return res;
    }
};