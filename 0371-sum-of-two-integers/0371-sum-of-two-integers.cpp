class Solution {
public:
    int getSum(int a, int b) {
        
        // for sum 
        while(b != 0 ){
            
            // for carry 
            unsigned carry = a&b;
            
            // add 
            a = a^b;
            
            b = carry<<1;
        }
        return a;
    }
};