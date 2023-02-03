class Solution {
public:
    bool isValid(string s) {
       stack<char> store;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                store.push(s[i]);
            }
            else {
                if(store.size()==0){
                    return false;
                }
                if(s[i]==')'){
                if(store.top()!='('){
                    return false;
                }
                store.pop();
            }else if(s[i]==']'){
                if(store.top()!='['){
                    return false;
                }
                store.pop();
            }else{
                if(store.top()!='{'){
                    return false;
                }
                store.pop();
            }
        }
        }
        if(store.size()==0){
            return true;
        }
        return false;
    }
};