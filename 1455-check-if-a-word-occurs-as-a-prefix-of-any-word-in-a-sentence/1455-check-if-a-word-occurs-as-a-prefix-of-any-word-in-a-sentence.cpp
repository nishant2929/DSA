class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream s(sentence);
        string a;
        int cnt=0;
       // bool shila=false;
        while(s>>a){
            cnt++;
            if(a.substr(0,searchWord.size())==searchWord){
                return cnt;
            }
        }
        return -1;
    }
};