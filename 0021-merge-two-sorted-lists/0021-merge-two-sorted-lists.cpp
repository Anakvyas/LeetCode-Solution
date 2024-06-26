/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next){}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode(0); // intialize with 0
        ListNode* head = list3;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        
        while(head1 != nullptr && head2 != nullptr){
            if(head1->val <= head2->val){
                list3->next = new ListNode(head1->val);
                head1 = head1->next;
            }else{
                list3->next = new ListNode(head2->val);
                head2 = head2->next;
            }
        list3 = list3->next;
        }
        
    
    // for extra element ;
    while(head1 != nullptr){
        list3->next = new ListNode(head1->val);
        list3 = list3->next;
        head1 = head1->next;
    }
    
    while(head2 != nullptr){
        list3->next = new ListNode(head2->val);
        list3 = list3->next;
        head2 = head2->next;
    }
    
    return head->next;
}  
};