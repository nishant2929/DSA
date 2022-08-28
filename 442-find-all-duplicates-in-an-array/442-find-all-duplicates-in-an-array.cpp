class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int> maps;
        for(int it = 0 ;it<nums.size();it++){
            // if(maps.find(it)==maps.end()){
            //     maps[nums[it]]=1;
            // }else{
            maps[nums[it]]++;
        }
        
        
        for(auto it : maps){
            if(it.second==2){
                ans.push_back(it.first);
            }
            
        }
        return ans;
    }
};