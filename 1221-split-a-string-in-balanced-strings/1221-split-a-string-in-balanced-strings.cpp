class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0 ;
        int ans = 0 ;
        int i = 0;
        while(i < s.size()){
            char c = s[i];
            if(c == 'R'){
                count++;
            }else{
                count--;
            }
            if(count == 0){
                ans++;
            }
           i++;
        }
        return ans;
    }
    
};