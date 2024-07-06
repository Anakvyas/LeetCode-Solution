class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        if(colors.size() <3){
            return -1;
        }
        int f = 0;
        int s = 1;
        int t = 2;
        int count = 0;
        int n = colors.size();
        while(f<n){
            if(colors[f] == colors[t] && colors[f] != colors[s]){
                count++;
            }
            f++;
            s = (s+1)%n;
            t = (t+1)%n;
        }
        return count;
    }
};