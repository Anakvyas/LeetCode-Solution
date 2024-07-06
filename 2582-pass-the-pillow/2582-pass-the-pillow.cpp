class Solution {
public:
    int passThePillow(int n, int time) {
        int r = -1;
        int i = 1;
        int t = 0 ;
        while(t<time){
            if(i==n || i==1){
                r = r*-1;
            }
            i = i+r;
            t++;
        }
        return i;
    }
};