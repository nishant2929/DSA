class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string s="";
        int cnt=1;
        int n=sentence.size();
        bool flag=false;
        int i=0;
        while(i<n){
            if(sentence[i]!=' '){
                s+=sentence[i];
                if(s==searchWord){
                    flag =true;
                    break;
                }
            }else{
                cnt++;
                s="";
            }
            i++;
        }
        return flag==true?cnt:-1;
    }
};