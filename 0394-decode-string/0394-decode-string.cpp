class Solution {
public:
    string decodeString(string s) {
        stack<int> num_stack ;
        stack<string> char_stack;
        int num = 0;
        for(char c : s){
            if(isdigit(c)){
                num = num*10+(c-'0');
            }else if(c != ']'){
                if(num!=0){
                    num_stack.push(num);
                }
                num =0 ;
                char_stack.push(string(1,c));
            }else{
                string ans= "";
                while(char_stack.top() != "[" && c == ']'){
                    ans = char_stack.top()+ans;
                    char_stack.pop();
                }
                char_stack.pop();
                //new string 
                string newans;
                for(int i = 0 ;i<num_stack.top();i++){
                    newans+=ans;
                }
                num_stack.pop();
                char_stack.push(newans);
            }
        }
        string result;
        while(!char_stack.empty()){
            result = char_stack.top()+result;
            char_stack.pop();
        }
        return result;
    }
};