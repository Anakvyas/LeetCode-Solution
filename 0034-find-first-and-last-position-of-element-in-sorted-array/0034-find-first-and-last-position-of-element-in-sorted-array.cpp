class Solution {
public:
    int first_element(vector<int>& nums, int target){
        int n  = nums.size();
        int start =0 ;
        int end =n-1;
        int ans = -1;
        while(start<=end){
            int mid = start +(end -start)/2;
            if(nums[mid] == target){
                ans = mid;
            }
            if(nums[mid]>= target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }


    int second_element(vector<int>&nums,int target){
        int n  = nums.size();
        int start =0 ;
        int end =n-1;
        int ans = -1;
        while(start<=end){
            int mid = start +(end -start)/2;
            if(nums[mid]==target){
                ans = mid;
            }
            if(nums[mid]> target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int first = first_element(nums, target);
        int second = second_element(nums, target);
        ans[0] = (first);
        ans[1] = (second);
        return ans;
    }
};