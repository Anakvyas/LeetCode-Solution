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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head){
            return nullptr;
        }
        
        if(head->next == nullptr){
            return head;
        }
        
        
        ListNode* temp  = head;
        
        while(temp != nullptr && temp->next !=nullptr){
            int v  = temp->val;
            temp->val = temp->next->val;
            temp->next->val = v;
            
            temp = temp->next->next;
        }
        
        return head;
    }
};