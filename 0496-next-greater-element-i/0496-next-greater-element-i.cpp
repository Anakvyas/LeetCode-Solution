class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int>s;
        unordered_map<int,int>map;
        int n = nums2.size()-1;
        s.push(nums2[n]);
        map[nums2[n]] = -1;
        for(int i = n-1 ;i >=0 ;i--){
            while(!s.empty() && s.top() <= nums2[i]){
                s.pop();
            }
            if(s.empty()){
                map[nums2[i]] = -1;
                s.push(nums2[i]);
            }else{
                map[nums2[i]]= s.top();
                s.push(nums2[i]);
            }
        }
        
        for(int i = 0 ;i <nums1.size() ;i++){
            int value = map[nums1[i]];
            nums1[i] = value;
        }
        
        return  nums1;
    }
};