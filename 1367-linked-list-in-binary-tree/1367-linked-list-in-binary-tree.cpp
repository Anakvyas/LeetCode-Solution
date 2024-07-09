/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool ischeck(ListNode* head, TreeNode* root){
        if(root == nullptr && head!= nullptr) return false;
        if(head == nullptr) return true;
        
        if(root->val != head->val){
            return false;
        }
        
        bool m = ischeck(head->next , root->left);
        if(m == false){
            return ischeck(head->next ,root->right);
        }
        return true;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root == nullptr && head == nullptr) return true;
        
        if(root == nullptr || head == nullptr) return false;
        
        if(root->val == head->val){
            if(ischeck(head ,root)){
                return true;
            }
        }
        bool n = isSubPath(head,root->left); //left
        if(n == false){
            return isSubPath(head,root->right);
        }
        return true;
    }
};