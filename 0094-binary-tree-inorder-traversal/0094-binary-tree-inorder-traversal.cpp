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
    void inorder_binary_tree(TreeNode* root,vector<int>&ans){
        if(root == nullptr){
            return;
        }
        
        //left subtree
        inorder_binary_tree(root->left , ans);
        ans.push_back(root->val);
        inorder_binary_tree(root->right , ans);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder_binary_tree(root,ans);
        return ans;
    }
};