class Solution {
public:
string multiply(string num1, string num2) {
    int l = num1.size()+num2.size();
    if(num1 == "0" || num2=="0"){
        return "0";
    }
    vector<int> v(l ,0);
    int carry  = 0 ;
    for(int i  = num2.size()-1 ; i>=0 ;i--){
        for(int j = num1.size()-1 ; j>=0 ;j--){
            int mul  = ((num2[i]- '0') * (num1[j] -'0'));
            int sum  = mul+v[i+j+1];

        v[i+j+1] = sum%10;
        v[i+j] +=sum/10;

    }
   
}


string ans;
for(int i =0 ;i<v.size() ;i++){
    char c = v[i]+'0';
    if(!(c == '0' && (ans.empty()))){
        ans+=c;
    }
    
}

return ans;
}
};