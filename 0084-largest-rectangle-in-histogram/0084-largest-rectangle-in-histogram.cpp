class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    int n = heights.size()-1;
    vector<int>right(n+1);
    vector<int>left(n+1);

    stack<int>st;
    stack<int>s;

    // next Smaller (right)
    for(int i = n ;i >=0;i--){
        while(!st.empty() && heights[st.top()] >= heights[i]){
            st.pop();
        }
        if(st.empty()){
            right[i] = n+1;
            st.push(i);
        }else{
            right[i] = st.top();
            st.push(i);
        }
    }

    // next smaller(left)
    for(int i = 0 ;i<=n ;i++){
         while(!s.empty() && heights[s.top()] >= heights[i]){
            s.pop();
        }
        if(s.empty()){
            left[i] = -1;
            s.push(i);
        }else{
            left[i] = s.top();
            s.push(i);
        }
    }

    // printVector(right);
    // printVector(left);
    int maxarea = INT_MIN;
    for(int i = 0;i <= n ;i++){
        int area = heights[i]*(abs(right[i] - left[i]-1));
        maxarea = max(maxarea , area);
    }
    return maxarea;
    }
};