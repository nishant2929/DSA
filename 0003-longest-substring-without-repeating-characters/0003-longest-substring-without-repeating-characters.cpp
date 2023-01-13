class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> c;
        //string ="";
      //  int cnt=0;
        int ans=0;
        int i=0;
        int j=0;
        int n = s.size();
        while(i<n && j< n){
           if(c.find(s[j])==c.end()) {
               c.insert(s[j]);
               j++;
               ans= max(ans,j-i);
           }else{
               c.erase(s[i]);
               i++;
           }
           
        }
        //ans = max(ans,cnt);
        return ans;
        
        //dwde
    }
};