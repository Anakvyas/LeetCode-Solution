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
    // for reverse
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* n_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n_node;
        }

        return prev;

    }
    
    ListNode * sum (ListNode* l1, ListNode* l2){
        if(l1== nullptr) return l2;
        if(l2 == nullptr) return l1;
        
        ListNode dummy(0);
        ListNode * curr  =  &dummy;
        
        int carry = 0 ;
        while(l1 != nullptr && l2 != nullptr){
            int val = l1->val+l2->val+carry;
            carry = val/10;
            cout<<"VAL"<<val<<"\n";
            ListNode* newnode = new ListNode(val%10);
            curr->next = newnode;
            curr = curr->next;
            
            l1= l1->next;
            l2 = l2->next;
          }
        
        while(l1!=nullptr){
            int val  = l1->val+carry;
            carry = val/10;
            
            ListNode* newnode = new ListNode(val%10);
            curr->next = newnode;
            curr = curr->next;
            
            l1 = l1->next;
        }
        
        
        while(l2!=nullptr){
            int val  =  l2->val+carry;
            carry = val/10;
            
            ListNode* newnode = new ListNode(val%10);
            curr->next = newnode;
            curr = curr->next;
        
             l2= l2->next;
        }
        
        if(carry != 0){
            ListNode* node = new ListNode(carry);
            curr->next = node;
        }
        
        return dummy.next;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* n1  = reverse(l1);
        ListNode* n2 = reverse(l2);
        
        ListNode* r =  sum(n1,n2);
        
        ListNode* ans = reverse(r);
        return ans;
    }
};