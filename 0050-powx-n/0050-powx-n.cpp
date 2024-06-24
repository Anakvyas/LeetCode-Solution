class Solution {
public:
    double myPow(double x, int n) {

        if(n==0){
            return 1;
        }
        long long N = n;
        if(n < 0 ){
            x = 1/x;
            N = -N;
        }
        double  powans = myPow(x,N/2);
        double  sqrpowans = powans * powans;
        if(N%2 == 1){
            return x * sqrpowans;
        }
        return sqrpowans;
    }
};