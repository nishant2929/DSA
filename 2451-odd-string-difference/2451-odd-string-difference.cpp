class Solution {
public:
    bool name(string&s, string&ss){
        for(int i=0;i<s.size()-1;i++){
            if(s[i]-s[i+1]!=ss[i]-ss[i+1]){
                return false;
            }  
        }
         return true;
    } 
    
    string oddString(vector<string>& words) {
        int same=0,nsame=0;
      for(int i=1;i<words.size();i++){
         if(name(words[0],words[i])){
              same++;
          }else{
             nsame =i;
         }
      }
     if(same>0){
         return words[nsame];
     }else{
         return words[0];
     }
        return "";
    }
};