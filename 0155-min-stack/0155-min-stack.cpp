class MinStack {
public:
    vector<int>v;
    vector<int>minvector;
    

    MinStack() {
      
    }
    
    void push(int val) {
      
        v.push_back(val);
        if(minvector.empty()){
            minvector.push_back(val);
        }else if(val <= minvector[minvector.size()-1]){
            minvector.push_back(val);
        }
    }
    
    void pop() {
        if(v[v.size() -1] == minvector[minvector.size()-1]){
            minvector.pop_back();
        }
        v.pop_back();
    }
    
    int top() {
        int n = v.size()-1;
        return v[n];
    }
    
    int getMin() {  
        // if(minvector[minvector.size()-1] == INT_MAX){
        //     return 0;
        // }
       return (minvector[minvector.size()-1]);
    }
};
