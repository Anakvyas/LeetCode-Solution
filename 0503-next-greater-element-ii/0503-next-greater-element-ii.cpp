class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        int n = nums.size()-1;
        s.push(nums[n]);
        vector<int>ans(n+1,INT_MIN);
        // ans[n] = -1;
        
        for(int i = n-1; i >= 0;i--){
            while(!s.empty()&& s.top()<=nums[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i] = INT_MIN;
                s.push(nums[i]);
            }else{
                ans[i] = s.top();
                s.push(nums[i]);
            }
        }
        
        for(int i = n ;i >=0 ;i--){
            if(ans[i] == INT_MIN){
                while(!s.empty()&& s.top()<=nums[i]){
                s.pop();
                }
                if(s.empty()){
                    ans[i] = -1;
                }else if(nums[i] != s.top()){
                    ans[i] = s.top();
                }
        }
            }

        return ans;
    }
};