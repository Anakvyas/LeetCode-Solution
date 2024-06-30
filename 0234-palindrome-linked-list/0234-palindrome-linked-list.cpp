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
    ListNode* middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        // ListNode* prev = slow;
        while(fast != nullptr && fast->next != nullptr){
            // prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    int size(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        return count;
    }
    bool isPalindrome(ListNode* head) {
        int Size = size(head);
        ListNode* mid = middle(head);
        ListNode* temp = head;
        stack<int>st;
        
        while(temp != mid){
            st.push(temp->val);
            temp =temp->next;
        }
        // size
        ListNode*newnode;
        if(Size%2 ==0){ //even
            newnode = temp;
            
        }else{// odd
            newnode = temp->next;
        }
        
        while(newnode != nullptr){
            if(st.top() != newnode->val){
                return false;
            }
            st.pop();
            newnode =newnode->next;
        }
        return true;
    }
};