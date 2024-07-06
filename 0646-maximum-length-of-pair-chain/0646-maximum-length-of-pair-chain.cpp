class Solution {
public:
    static bool compare(vector<int>v1 ,vector<int>v2){
        return v1[1]<v2[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin() ,pairs.end(),compare);
        
        // loops 
        int end = INT_MIN ;
        int count = 0;
        for(int i = 0 ; i< pairs.size();i++){
            if(pairs[i][0] > end){
                count++;
                end = pairs[i][1];
            }
        }
        return count;
    }
};