class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        string res;
        for(int i =0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top()=='(' && s[i]==')'){
                st.pop();
                continue;
                
            }
            else if(st.top()=='{' && s[i]=='}'){
                st.pop();
                continue;
              
            }
            else if(st.top()=='[' && s[i]==']'){
                st.pop();
                continue;
                
                
            }
            else{st.push(s[i]);}
            
            
        }
        return (st.empty())? true:false;
    }
};