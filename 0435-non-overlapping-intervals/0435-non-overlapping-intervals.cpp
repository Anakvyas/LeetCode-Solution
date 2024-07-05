class Solution {
public:
    static bool compare(vector<int>v1, vector<int>v2){
        return v1[1] < v2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() ,intervals.end(),compare);

        int end = INT_MIN, count = 0;
        for(int i = 0 ; i <intervals.size() ;i++){
            if(end > intervals[i][0]){
                cout<<end;
                count++;
            }else{
                end  = intervals[i][1];
            }
        }
        return count;
    }
};