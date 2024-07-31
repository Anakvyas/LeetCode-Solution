class Solution {
public:
    
    int findSetBits(int num){
        int count = 0 ;
        while(num != 0){
            if(num&1)count++;
            num = num>>1;
        }
        return count;
    }
    
    bool findPrime(int n){
        if(n == 2 || n==3 || n==5 || n==7 ||n==11||n==13||n==17||n==19||n==23||n==29||n==31 )return true;
        
        return false;
    }
    
    int countPrimeSetBits(int left, int right) {
        int i = left;
        int ans =0;
        while(i <= right){
            int val = findSetBits(i);
            if(findPrime(val))  ans++;
            i++;
        }
        return ans;
    }
};