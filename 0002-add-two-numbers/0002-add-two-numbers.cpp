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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = l1;
        ListNode* temp2 = l2 ;
        ListNode* dumy  = new ListNode(0);
        ListNode*  head = dumy;
        
        int carry = 0;
        while(temp != nullptr ||temp2 != nullptr){
            int x = (temp != nullptr) ?temp->val : 0;
            int y = (temp2 != nullptr) ? temp2->val:0;

            int sum = x+y+carry;

            dumy->next = new ListNode(sum%10);
            dumy  = dumy->next;
            
            carry = sum / 10;
            if (temp != nullptr) temp = temp->next;
            if (temp2 != nullptr) temp2 = temp2->next;
        }

        if(carry > 0 ){
         dumy->next = new ListNode(carry);
        }
        return head->next;
    }
};