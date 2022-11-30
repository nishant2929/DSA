class Solution {
public:
    
    void f  ( int index,vector<int>&ds, vector<vector<int>>&ans,vector<int>&nums){
        
        if(index==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(nums[index]);
        f(index+1,ds,ans,nums);
        ds.pop_back();
        
        
        f(index+1,ds,ans,nums);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        f(0,ds,ans,nums);
        return ans;
    }
};