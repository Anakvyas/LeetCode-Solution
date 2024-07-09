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
    int height(TreeNode* root, int&sum){
        if(root == nullptr) return 0;
        
        
        // if(root->left != nullptr) sum+=root->left->val;
        // if(root->right != nullptr) sum+=root->right->val;
        
        int leftsum = max(0,height(root->left,sum));
        int rightsum = max(0,height(root->right,sum));
        
        sum = max(sum ,root->val+leftsum+rightsum);
        return root->val+max(leftsum,rightsum);
    }
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        height(root,sum);
        
        return sum;
    }
};