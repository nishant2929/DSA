class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            //cout<<mp[nums[i]];
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                break;
            }  
             mp[nums[i]]=i;
    }
        return ans;
  }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//      unordered_map<int,int> nish;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//         if(nish.find(target-nums[i])!=nish.end())
//         {
//             ans.push_back(i);
//             ans.push_back(nish[target-nums[i]]);
//            // return {i,nish[target-nums[i]]};
//         }
//             nish[nums[i]]=i;
//             }
//         return ans;
//     }
// };