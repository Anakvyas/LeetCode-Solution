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
    // get middle
ListNode* getmiddle(ListNode* head){
     ListNode* slow = head;
    ListNode *prev  =slow;
    ListNode* fast  = head;

    while(fast!=NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next =NULL;
    return slow;
}


//merge Sort
ListNode* merge_sort(ListNode* i,ListNode* j){
 
 // answer linked list;
    ListNode dumpy(0);
    ListNode* List =  &dumpy;

    while( i!= NULL && j!= NULL){
        if(i->val <= j->val){
            ListNode * newnode = new ListNode(i->val);
            List->next = newnode;
            i = i->next;
        }else{
            ListNode * newnode = new ListNode(j->val);
            List->next = newnode;
            j = j->next;
        }
        List = List->next;
    }

    while(i != NULL){
        ListNode * newnode = new ListNode(i->val);
        List->next = newnode;
        List = List->next;
        i = i->next;
    } 

    while(j != NULL){
        ListNode * newnode = new ListNode(j->val);
        List->next = newnode;
        List = List->next;
        j = j->next;
    }

    return dumpy.next;
}
// merge
ListNode* merge(ListNode* head){
    if(head == NULL || head->next == NULL) return head;

    ListNode* middle  = getmiddle(head);
    ListNode* left  = merge(head);
    ListNode* right = merge(middle);
    return merge_sort(left,right);
}
    
    ListNode* sortList(ListNode* head) {
        ListNode* newhead = merge(head);
        return newhead;
    }
};