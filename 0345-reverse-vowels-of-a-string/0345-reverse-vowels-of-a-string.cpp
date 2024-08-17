class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        
        for(int i = 0 ; i <s.size() ;i++){
            char c = s[i];
            if(c == 'a' || c=='e' || c=='i'|| c=='o'||c=='u'||c=='A'|| c=='E' || c=='I'|| c=='O'||c=='U'){
                st.push(c);
            }
        }
        
        for(int i = 0 ; i <s.size();i++){
            char c = s[i];
            if(c == 'a' || c=='e' || c=='i'|| c=='o'||c=='u'||c == 'A' || c=='E' || c=='I'|| c=='O'||c=='U'){
                s[i] = st.top();
                st.pop();
            }
        }
        return s;
    }
};