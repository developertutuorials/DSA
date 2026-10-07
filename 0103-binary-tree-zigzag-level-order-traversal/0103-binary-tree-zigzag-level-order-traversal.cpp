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
    void fun(TreeNode* node,vector<vector<int>> &res){
        if(node==NULL){
            return;
        }
        queue<TreeNode*>q;
        q.push(node);
        int checkpoint =0;
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;
            while(n--){
                TreeNode* t = q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left!=NULL){
                    q.push(t->left);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                }
            }
             if(checkpoint==1){
                    reverse(temp.begin(),temp.end());
                }
            res.push_back(temp);
                if(checkpoint==0){
                    checkpoint=1;
                }
                else{
                    checkpoint=0;
                }
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>res;
       fun(root,res);
       return res; 
    }
};