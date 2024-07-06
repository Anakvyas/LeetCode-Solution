class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n  = nums.size();
        int count = 0 ;
        for(int  i= 0 ; i < n ;i ++){
                int rem = nums[i]%3;
                if(rem == 1){ // subtract 1
                    count+=1;
                }else if(rem ==2){ // add 1
                    count+=1;
                }
        }
        return count;
    }
};