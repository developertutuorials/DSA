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
    void fun(TreeNode* node,vector<int>& res){
        if(node==NULL)return;
        queue<TreeNode*>q;
        q.push(node);
        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode* t =q.front();
                q.pop();
                if (n == 0) {
                    res.push_back(t->val);
                }

                if (t->left != NULL) {
                    q.push(t->left);
                }

                if (t->right != NULL) {
                    q.push(t->right);
                }
                
                
            }
        }

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        fun(root,res);
        return res;
        
    }
};