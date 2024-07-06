class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        
        for(int i = 1; i*i <= n;i++){
            if(n%i ==0){
                v.push_back(i);
                if(n/i != i){
                    v.push_back(n/i);
                }
            }
        }
    
    sort(v.begin(),v.end());
    for(int i : v){
        cout<<i<<" ";
    }
    if(v.size() < k){
        return -1;
    }
    return v[k-1];
    }
};