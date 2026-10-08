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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q==NULL){
            return true;
        }
        if(p==NULL or q==NULL)return false;
        if(p->val!=q->val)return false;
        bool b1=isSameTree(p->left,q->left);
        bool b2=isSameTree(p->right,q->right);
        if(b1==true and b2==true){
            return true;
        }
        else {
            return false;
        }
        
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool b1,b2;
        if(root== NULL and subRoot==NULL){
            return true;
        }
        if(root==NULL or subRoot==NULL)return false;

        if(root->val==subRoot->val){
            if(isSameTree(root,subRoot)){
                return true;
            }
        }
        if(root->val !=subRoot->val){
            b1 =isSubtree(root->left,subRoot);
            b2 =isSubtree(root->right,subRoot);

        }
        if(b1==true or b2==true){
            return true;
        }
        else {
            return false;
        }
    }
};