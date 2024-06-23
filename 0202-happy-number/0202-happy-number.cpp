class Solution {
public:
    int sum(int n){
        int sum =0 ;
        while(n!=0){
            int digit = n%10;
            sum+=(digit*digit);
            n = n/10;
        }
        return sum;
    }

    bool find(int n,unordered_map<int,bool>map){

            if(map.find(n) !=map.end()){
                if(n == 1){
                    return true;
                }else{
                    return false;
                    
                }
            }else{
                map[n]= true;
            }

            int s = sum(n);
            cout<<s<<endl;
            return find(s,map);
        }
    

    bool isHappy(int n) {
        unordered_map<int,bool>map;
        bool ans  = find(n, map);
        if(ans == 1){
            return true;
        }else{
            return false;
        }
    }
};