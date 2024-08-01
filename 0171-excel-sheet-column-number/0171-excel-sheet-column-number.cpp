class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int n = columnTitle.size();
        int i = n-1;
        int ans  = 0;
        while( i >= 0 ){
            char c = columnTitle[i];
            int val  = (c-'A')+1;
            int p =  pow(26,n-1-i);
            ans+=(val*p);
            i--;
        }
        return ans;
    }
};