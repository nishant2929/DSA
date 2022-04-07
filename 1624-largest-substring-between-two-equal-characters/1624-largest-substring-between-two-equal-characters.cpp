class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n= s.size();
        int maxstring=-1;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    maxstring= max(maxstring, (j-i-1));
                    
                }
            }
        }
        
       return maxstring;
       }
    
};