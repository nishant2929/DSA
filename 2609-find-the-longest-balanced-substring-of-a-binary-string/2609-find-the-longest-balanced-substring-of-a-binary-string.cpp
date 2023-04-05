class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int ans=0;
            int z=0;
            int o = 0;
        for(int i=s.size()-1;i>=0;i--){
          if(s[i]=='0'){
              z++;
          } else if(s[i]=='1' and z>0){
              int temp= min(z,o);
              ans =max(temp,ans);
               o=1;
               z=0;
           }else{
              o++;
          }
            
    }
        int temp= min(o,z);
     return max(temp,ans) *2;
    }
};