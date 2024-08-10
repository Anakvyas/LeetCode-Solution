class Solution {
public:
    void reverse(string & s){
        int i =  0;
        int j = s.size()-1;
        
        while(i<= j){
            //swap
            char c = s[i];
            s[i]  = s[j];
            s[j]  = c;
            
            i++;
            j--;
        }
    }
    string clearDigits(string s) {
        stack<char> st;
        
        int  i = 0 ;
        while(i < s.size()){
            
            char c =  s[i];
            st.push(c);
                
            if(isdigit(c)){
                st.pop();
                st.pop();
            }
            
            i++;
        }
        
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans);
        return ans;
        
    }
};