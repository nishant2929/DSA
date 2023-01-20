class Solution {
public:
    int minimumPartition(string s, int k) {
        string ss ="";
        int cnt=1;
        for(int i=0;i<s.size();i++){
            ss= ss+s[i];
            if(stol(ss)>k){
               // cout<<ss<<" ";
                ss = "";
                ss = ss+s[i];
                cnt++;
                if(stol(ss)>k){
                    return -1;
                }
            }
        }
        return cnt;
    }
};