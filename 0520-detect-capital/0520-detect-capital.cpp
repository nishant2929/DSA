class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i])){
                cap++;
            }
        }
        if(cap==word.size()){
            return true;
        } else if(cap==1){
            if(isupper(word[0])){
                return true;
            }
        }else if(cap==0){
            return true;
        }
        return false;
    }
};