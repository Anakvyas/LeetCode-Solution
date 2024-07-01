class Solution {
public:
    double merge(vector<int> nums1 ,vector<int>nums2){
        int  i = 0;
        int j = 0;
        vector<int>temp;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }else{
                temp.push_back(nums2[j]);
                j++;
            }
        }

        while(i < nums1.size()){
           temp.push_back(nums1[i]);
            i++; 
        }

        while(j < nums2.size()){
            temp.push_back(nums2[j]);
            j++;
        }
    

        int n = temp.size();
        if(n %2 == 0){
            double a = temp[(n/2)-1];
            double b = temp[((n+2)/2)-1];

            return (a+b)/2;
        }else{
            int d = temp[((n+1)/2)-1];
            return d;
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans  = merge(nums1,nums2);
        return ans;
    }
};