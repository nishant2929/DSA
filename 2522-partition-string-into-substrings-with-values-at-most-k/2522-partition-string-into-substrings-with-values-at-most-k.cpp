class Solution {
public:
    int minimumPartition(string s, int k) {
        string str;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            str.push_back(s[i]);
            if(stol(str)>k){
                str="";
                cnt++;
                str.push_back(s[i]);
                if(stol(str)>k){
                    return -1;
                }
                
            }
        }
        return cnt+1;
    }
};