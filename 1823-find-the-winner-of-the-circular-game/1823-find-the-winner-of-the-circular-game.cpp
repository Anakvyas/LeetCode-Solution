class Solution {
public:
    int findTheWinner(int n, int k) {
        
        queue<int>q;
        
        for(int i = 1 ;i <= n ;i++){
            q.push(i);
        }
        
        while(q.size() != 1){
            int val  = k;
            
            while(val > 1){
                int v =  q.front();
                q.pop();
                q.push(v);
                
                val--;
            }
            
            q.pop();
        }
      
        return q.front();
    }
    
};