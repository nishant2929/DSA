class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> nish;
        for(int i=0;i<nums.size();i++){
        if(nish.find(target-nums[i])!=nish.end())
        {
            return {i,nish[target-nums[i]]};
        }
            nish[nums[i]]=i;
            }
        return {};
    }
};

