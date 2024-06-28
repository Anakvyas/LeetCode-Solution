class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n = s.size();
        int i =0;
        while(i<n){
            char c = s[i];
            if(c == '{' || c == '(' || c =='['){
                st.push(c);
            }else{
                if(st.empty()){
                    return false;
                }
                if( (st.top() == '('&& s[i]==')')||(st.top() == '{'&& s[i]=='}')||(st.top() == '['&& s[i]==']')){
                    st.pop();
                }else{
                    return false;
                }
            }
            i++;
        }
        return (st.empty());
    }
};