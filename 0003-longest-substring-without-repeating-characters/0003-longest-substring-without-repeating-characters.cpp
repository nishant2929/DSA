class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> c;
        int n = s.size(), ans=0,i=0,j=0;
        while(i<n && j<n){
            if(c.find(s[j])==c.end()){
                c.insert(s[j++]);
                ans = max(ans,j-i);
            }else{
                c.erase(s[i++]);
            }
        }
        return ans;
    }
};