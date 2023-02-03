class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> ss;
        for(int i=0;i<s.size();i++){
            if(ss.size()==0){
                ss.push(s[i]);
              //  continue;
            }else{
                  if(s[i]==')'){
                   if(ss.top()=='('){
                        ss.pop();
                    }else{
                        ss.push(s[i]);
                    }
                }else{
                      ss.push(s[i]);
                  }
            }
        }
        return ss.size();
    }
};


