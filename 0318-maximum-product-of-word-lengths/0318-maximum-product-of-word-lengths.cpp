class Solution {
public:
    int maxProduct(vector<string>& words) {
      //  
        vector<int>v(words.size(), 0);
        int ans  = 0;
        int n = words.size();
        for(int i = 0 ; i <n ;i++){
           int k = 0;
           while(k < words[i].size()){
               char c = words[i][k];
               v[i] |= (1<<(c-'a'));   // making whole bitwise words 
               k++;
           }
        for (int j = 0 ; j < i ; j++){
            if(!(v[i] & v[j] )){
                int mul = words[i].size()*words[j].size();
                ans = max(ans,mul);
            }
            }
        }
        return ans ;
    }
};