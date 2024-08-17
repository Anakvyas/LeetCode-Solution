class Solution {
public:
    string reverseWords(string s) {
        
        stack<string>v;
        
        string a;

        for(int i = 0 ; i < s.size();i++){
            
            char c = s[i];
            cout<<c<<"\n";

            if(c == ' '){
                cout<<a<<"\n";
                if(a != "") v.push(a);
                a= "";
                continue;
            }
            
            a+=c;
            cout<<"S === "<<a<<"\n";
    }
    if(a != "") v.push(a);
  

    string r ;
    while(!v.empty() && v.top() != " "){
        string ans = v.top();

        if(ans == "") cout<<"om\n";
        r+=ans;
        v.pop();

        if(!v.empty() && v.top() != " "){
            r+=" ";
        }
    }
        
    cout<<"reverse is ::"<<r<<endl;

    return r;       
    }
};