class Solution {
public:
    string reverseString(string& result){
        int i = 0 ;
        int j = result.size()-1;
        
        while(i<=j){
            char c =  result[i];
            result[i] = result[j];
            result[j] = c;
            i++;
            j--;
        }
        return result;
    }
    string addStrings(string num1, string num2) {
        
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0 ;
        string result ;
        while(i >=0 &&j>=0){
            char c1 = num1[i];
            char c2 = num2[j];
            
            int sum = (c1-'0')+(c2-'0')+carry;
            
            carry = sum/10;
            char c = (sum %10)+'0';
            result+=c;
            
            i--;
            j--;
        }
        
        
        while(i>=0){
             char c1 = num1[i];
             int sum = (c1-'0')+carry;
            
            carry = sum/10;
            char c = (sum %10)+'0';
            result+=c;
             i--;
        }
        
        while(j>=0){
             char c1 = num2[j];
             int sum = (c1-'0')+carry;
            
            carry = sum/10;
            char c = (sum %10)+'0';
            result+=c;
             j--;
        }
        
        if(carry != 0){
            result+=(carry+'0');
        }
        
        cout<<reverseString(result);
        
        return result;
    }
};