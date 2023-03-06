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
    int maxi=0;
    void dfs(TreeNode*root){
        if(root==NULL){
            return;
        }
        int l = height(root->left);
        int r= height(root->right);
        maxi= max(maxi,l+r);
        dfs(root->left);
        dfs(root->right);
    }
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l = height(root->left);
        int r= height(root->right);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxi;
    }
};