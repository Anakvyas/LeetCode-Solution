class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>small(26,0);
        vector<int>large(26,0);
        
        for(char c : s){
            if(c >= 'a' && c<='z'){
                small[c-'a']++;
            }else{
                large[c-'A']++;
            }
        }
        int ans = 0 ;
        int count = 0;

        for(int i  = 0 ; i < 26 ;i++){
            int n = small[i];
            
            int a = n/2;
            ans+=a*2;
            
            if(n%2 ==1){
                count++;
            }
        }
        
        for(int i  = 0 ; i < 26;i++){
            int n = large[i];
            
            int a = n/2;
            ans+=a*2;
            
            if(n%2 ==1){
                count++;
            }
        }
        cout<<"count: : "<<count<<endl;
        if(count!=0){
            ans+=1;
        }
        return ans;
    }
};