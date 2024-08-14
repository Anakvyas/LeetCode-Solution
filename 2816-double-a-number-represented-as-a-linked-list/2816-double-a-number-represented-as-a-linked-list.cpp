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
    ListNode * reverse(ListNode* head){
    
    ListNode *prev= nullptr;
    ListNode* curr = head;
    
    while(curr != nullptr){
        
        ListNode * n_next = curr->next;
        
        curr->next =  prev;
        prev = curr;
        curr = n_next;
    }
    
    head = prev;
    
    return head;
    
}
    ListNode* doubleIt(ListNode* head) {
        
    ListNode* temp = reverse(head);
    ListNode* h  =  temp;
    ListNode* prev = temp;
    
    int carry = 0 ;
    while(temp != nullptr){
        
        int num = (temp->val* 2) +carry ;

        cout<<"num is :: " << num<<"\n";

       
    
        temp->val = num%10;
        carry = num/10;
    
        prev = temp;
        temp = temp->next;
        
    }
    
    if(carry != 0){
        ListNode* carr= new ListNode(carry);
        prev->next = carr;
    }
   

    ListNode * r_head = reverse(h);

    return r_head;
}


};