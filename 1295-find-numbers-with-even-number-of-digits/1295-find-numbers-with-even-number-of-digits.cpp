class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int even = 0;
        for(int i = 0 ; i <nums.size() ; i++){
            int  val  = to_string(nums[i]).size();
            if(!(val & 1)){
                even++;
            }
        }
        
        return even;
    }
};