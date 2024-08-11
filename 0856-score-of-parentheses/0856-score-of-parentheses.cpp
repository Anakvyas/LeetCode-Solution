class Solution {
public:
    int scoreOfParentheses(string s) {
       stack<int > st;
        st.push(0);
    for(char c: s){
        if(c == '('){
            st.push(0);
        }else{
            int val = st.top();
            st.pop();
            int num = 0 ;

            if(val >0){
                num =  val*2;
            }else{
                num = 1;
            }
            st.top()+=num;
        }
    }
    return st.top();
    }
};