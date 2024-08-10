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
class Solution {
public:
      int size(ListNode* head){
        ListNode*temp = head;
        int count = 0 ; 
        while(temp != 0){
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    ListNode * getNode(ListNode* head ,int k){
        
        ListNode* temp = head;
        int i = 1;
        while(i<k){
            temp = temp->next;
            i++;
        }
        
        return temp;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        int n = size(head);
    
        ListNode* first = getNode(head,k);
        ListNode* second = getNode(head,n-k+1);
        
        
        int v =  first->val;
        first->val = second->val;
        second->val  = v;
        
        return head;
    }

};