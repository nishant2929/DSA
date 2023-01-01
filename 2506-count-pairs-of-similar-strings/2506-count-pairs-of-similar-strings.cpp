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
            mp[ss]++;
        }
        for(auto it : mp){
            if(it.second>1){
                cnt = cnt + (it.second)*(it.second-1)/2;
            }
        }
        return cnt;
    }
};