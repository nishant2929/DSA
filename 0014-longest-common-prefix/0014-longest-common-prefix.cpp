class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        //string ans="";
        for(int i=1;i<strs.size();i++){
            string temp="";
            for(int j=0;j<s.size();j++){
                if(s[j]!=strs[i][j]){
                    s=temp;
                }else{
                    temp+=strs[i][j];
                }
            }
        }
        return s;
    }
};