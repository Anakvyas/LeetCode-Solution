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
        int count =0 ;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    ListNode* reverse(ListNode*head){
        ListNode* prev =nullptr;
        ListNode* cur =head;
        while(cur!=nullptr){
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur =next;
        }
        head = prev;
        return head;
    }
    void swap(vector<int>&ans ,int i ,int j){
        int temp = ans[i];
        ans[i] =ans[j];
        ans[j] =temp;
    }
    vector<int> reverseVec(vector<int>&ans){
        int start =0 ;
        int end = ans.size()-1;
        while(start<=end){
            swap(ans ,start,end);
            start++;
            end--;
        }
        return ans;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        int size = Size(head);
        ListNode* temp = reverse(head);
        vector<int>ans(size);
        int i = 0;
        stack<int>s;
        // if(temp!=nullptr){
        //     ans[0] =1;
        //     s.push(temp->val);
        // }
        
        while(temp != nullptr){
            while(!s.empty()&&temp->val >= s.top()){
                s.pop();
            }
            if(s.empty()){
                ans[i] = 0;
                s.push(temp->val);
            }else{
                ans[i] = s.top();
                s.push(temp->val);
            }
            
            temp = temp->next;
            i++;
        }
        
        reverseVec(ans);
        return ans;
    }
};