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
    void levelOrderTraverse(TreeNode* root,vector<vector<int>>&ans){
        if(root == nullptr){
            return;
        }
        // queue 
        queue<TreeNode*> q;
       
        q.push(root);
        q.push(nullptr);
        
         vector<int>v;
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr == nullptr){
                ans.push_back(v);
                if(q.empty()){
                    break;
                }
                q.push(nullptr);
                v.clear();
            }else{
                v.push_back(curr->val);
                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);

            }
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        
        levelOrderTraverse(root,ans);
        return ans;
    }
};