class Solution {
public:
    // sieve of eratosthenes
    int countPrimes(int n) {
        // this code time complexity is  0(nloglogn)
        // make v which store value 
        vector<bool>v(n ,true);
        for(int i =2 ; i *i < n ;i++){
            if(v[i]){
            for(int j = 2*i; j < n ; j+=i){
                v[j]= false;
            }
            }
        }
    
        // this i  for count only prime numbers'
        int count=0;
        for(int i = 2;i<n;i++){
            if(v[i] == true){
                count++;
            }
        }
    return count;
    }
};