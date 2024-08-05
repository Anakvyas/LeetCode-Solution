class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map <string,int> map;
        
        for(auto& i : arr){
            ++map[i];
        }
        
        for(auto & i : arr){
            
            if(map[i] == 1){
                k--;
                if(k== 0) return i;
            }
           

        }
        
        return "";
    }
};