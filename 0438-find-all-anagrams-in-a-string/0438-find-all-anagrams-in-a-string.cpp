class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char,int> mp;
    
        for(int i=0;i<p.size();i++){
            mp[p[i]]++;
        }
        
        int i=0;
        int j=0;
        int k=p.size();
        int count=mp.size(); // initialize to the size of mp
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            
            if(j-i+1<k){
                j++;
            } else {
                if(count==0){
                    ans.push_back(i);
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
