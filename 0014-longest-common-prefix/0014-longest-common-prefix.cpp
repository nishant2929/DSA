class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(int i=1;i<strs.size();i++){
             string temp1="";
            for(int j=0;j<s.size();j++){
                // if(strs[i].size()<j){
                //     break;
                // }
                if(s[j]!=strs[i][j]){
                   s=temp1;
                    break;
                }else{
                   temp1+=s[j];
                }
            }
           // s =temp1;
        }
        return s;
    }
};