class Solution {
public:
    bool isValid(string s) {
       stack<int>st;
        for(int i=0;i<s.size();i++){
            if(st.size()==0){
                st.push(s[i]);
            }else{
                if(st.top()=='(' and s[i]==')' || st.top()=='[' and s[i]==']' || st.top()=='{' and s[i]=='}'){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
                    
            }
        }
        if(st.size()==0){
            return true;
        }
        return false;
    }
};