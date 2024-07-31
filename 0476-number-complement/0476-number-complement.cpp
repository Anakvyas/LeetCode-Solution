class Solution {
public:
    int findComplement(int num) {
        int n= num;
        int i =0 ;
        while(num !=0){
            i++;
            num = num>>1;
        }
        
        int val  =  (~(~0 << i))& ~n;
        return val;   
    }
};