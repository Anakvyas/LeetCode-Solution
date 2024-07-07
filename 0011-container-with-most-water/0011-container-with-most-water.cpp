class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int start = 0 ;
        int end = n-1;
        int ans = INT_MIN;

        while(start <end){
            int Area = min(height[start] ,height[end]) * (end - start);

            ans  = max(ans,Area);

            if(height[start] < height[end]){
                start++;
            }else{
                end--;
            }
        }

    return ans;
    }
};