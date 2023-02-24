class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};