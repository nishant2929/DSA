class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int cnt=0;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        for(auto it : mp){
            if(it.second==1){
                return -1;
            }
            if(it.second<=3){
                cnt++;
            }else{
                while(it.second>3){
                    it.second = it.second-3;
                    cnt++;
                }
                cnt++;
            }
    }
        return cnt;
}
};