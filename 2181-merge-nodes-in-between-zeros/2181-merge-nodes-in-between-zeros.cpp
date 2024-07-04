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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* dumny = new ListNode(0);
        ListNode* current = dumny;
        int sum = 0 ;
        ListNode* temp = head->next;
        while(temp!= nullptr){
            if(temp->val == 0){
                ListNode* n = new ListNode(sum);
                current->next = n;
                current = current->next;
                sum = 0;
            }
            sum+=temp->val;
            temp=temp->next;
        }
        return dumny->next;
    }
};