class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>prefix;
        prefix.push_back(0);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prefix.push_back(sum);
        }
        unordered_map<int,int>mp;
        int cnt=0;
        for(auto ele:prefix){
            if(mp[ele-k]){
                cnt+=mp[ele-k];
            }
            mp[ele]++;
        }
        return cnt;
    }
};