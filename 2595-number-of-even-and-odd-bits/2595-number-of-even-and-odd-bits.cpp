class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>ans;
        int even =0 ;
        int odd =0 ;
        int idx = 0;
        while(n!=0){
            if(n&1){
                if(idx & 1){
                    odd++;
                }else{
                    even++;
                }
            }
            idx++;
            n = n >>1;
        }
        
        ans.push_back(even);
        ans.push_back(odd);
        return ans;
    }
};