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
    pair<int,int> findDiameter(TreeNode* root){
        if(root  == nullptr){
            return make_pair(0,0); //base case
        }
        // diameter ,height
        pair<int,int>left = findDiameter(root->left); // ld ,lh
        pair<int,int> right = findDiameter(root->right); // Rd,Rh
        
        //for diameter we used to find (root diameter = lh +rh), ld,rd,
        int root_diameter = left.second+right.second;
        int diameter = max(max(left.first,right.first),root_diameter);
        int height = max(left.second ,right.second)+1;
        
        return make_pair(diameter,height);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        return findDiameter(root).first;
    }
};