class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        int i = 1 ,idx = 0 ;
        vector<string> stack;
        
        while(i<= n){
                
           
            
            stack.push_back("Push");
            
            if(i != target[idx]){
                stack.push_back("Pop");
                idx--;
            }
            
            if(i == target[target.size()-1]) {
                break;
            }
                
           i++;
            idx++;   
        }
        return stack;
    }
};