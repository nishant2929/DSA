class Solution {
public:
    
    void f(vector<int>&nums , vector<vector<int>>&ans,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = index ;i<nums.size();i++){
            swap(nums[index],nums[i]);
            f(nums,ans,index+1);
            swap(nums[index],nums[i]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        f(nums,ans,0);
        return ans;
    }
};