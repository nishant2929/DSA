class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> mp(26,0);
        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']++;
        }
        for(int j=0;j<s.size();j++){
            if(mp[s[j]-'a']==1){
                return j;
            }
        }
        return -1;
    }
};