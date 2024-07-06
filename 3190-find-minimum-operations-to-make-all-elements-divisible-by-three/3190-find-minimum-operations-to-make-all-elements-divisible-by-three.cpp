class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n  = nums.size();
        int count = 0 ;
        for(int  i= 0 ; i < n ;i ++){
            if(nums[i] %3 != 0){
                int sum  = nums[i];
                int sub = nums[i];
                while(sum %3!=0 && sub%3!=0){
                    sum+=1;
                    sub-=1;
                    count++;
                }
            }
        }
        return count;
    }
};