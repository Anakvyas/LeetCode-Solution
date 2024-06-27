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
    int Size(ListNode* head){
        ListNode* temp = head;
        int count = 0 ;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* temp = head;
        int size = Size(head);
        int n = k%size;
        
        if(n==0){
            return head;
        }
        
        for(int i = 1 ;i < (size-n) ;i++){
            temp = temp->next;
        }
        
        
        ListNode* head2 = temp->next;
        temp->next = nullptr;
        ListNode* copyhead2 = head2;
       

        while(copyhead2-> next != nullptr){
            copyhead2 = copyhead2->next;
        }

       
        copyhead2->next = head;

        return head2;

    }
};