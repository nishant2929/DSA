class Solution {
public:
    int minimumRounds(vector<int>& t) {
      //sort(tasks.begin(),tasks.end());
        int cnt=0;
        map<int,int>mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        
        for(auto i : mp){
            if(i.second ==1){
                return -1;
            }
            if(i.second<=3){
                cnt++;
            }else{
                while(i.second>3){
                i.second = i.second-3;
                cnt++;
                }
                if(i.second>0){
                    cnt++;
                }
                
            }
            //cout<< i.first <<" ";
        }
        return cnt;
    }
};

