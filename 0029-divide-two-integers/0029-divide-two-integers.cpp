class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if (dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        long long int  quotient  = dividend /divisor;
        if(quotient > INT_MAX){
            return INT_MAX;
        }
        if(quotient < INT_MIN){
            return INT_MIN;
        } 
        int ans = static_cast<int>(quotient);
        return ans;

    }
};