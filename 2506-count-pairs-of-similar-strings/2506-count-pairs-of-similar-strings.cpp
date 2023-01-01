class Solution {
public:
    int similarPairs(vector<string>& words) {
       map<string,int> mp;
        int cnt =0;
        for(int i=0;i<words.size();i++){
            set<char> s;
            for(int j =0;j<words[i].size();j++){
                s.insert(words[i][j]);
            }
            string ss;
            for(auto it : s){
                ss = ss+it;
            }
            
            if(mp.find(ss)!=mp.end()){
                 cnt = cnt+ mp[ss];
                mp[ss]++;
            }else{
                mp[ss]++;
            }
           
        }
        
        return cnt;
    }
};