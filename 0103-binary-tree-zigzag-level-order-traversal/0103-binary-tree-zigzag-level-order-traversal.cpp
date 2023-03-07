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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)return v;
        queue<TreeNode*>q;
        bool flag= true;
        q.push(root);
        while(q.size()>0){
             int size = q.size();
            vector<int>temp(size);
            for(int i=0;i<size;i++){
                TreeNode* curr= q.front();
                q.pop();
                if(flag==true){
                   temp[i]=curr->val;
                }else{
                    temp[size-i-1]=curr->val;
                }
                if(curr->left!=NULL)q.push(curr->left);
                if(curr->right!=NULL)q.push(curr->right);
               // temp.push_back(curr->val);
            }
            v.push_back(temp);
            flag= !flag;
        }
        return v;
    }
};