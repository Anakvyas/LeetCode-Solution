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
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = Size(head);
        int idx = size-n;
        int i = 0;
        ListNode* dumy = new ListNode(0);
        dumy->next = head;
        
        ListNode* temp = dumy;
        while(i < idx){
            i++;
            temp = temp->next;
        }
        

        ListNode* node = temp->next;
        temp->next = temp->next->next;
        delete node;

        ListNode* newHead = dumy->next;
        delete dumy;

        return newHead;
    }
};