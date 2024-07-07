class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int ans = numBottles;
        int empty_bottle = numBottles;
        while(empty_bottle >=numExchange){
            int bottle = empty_bottle/numExchange;
            empty_bottle = bottle +(empty_bottle%numExchange);
            ans+=bottle;
        }
        return ans;
    }
};