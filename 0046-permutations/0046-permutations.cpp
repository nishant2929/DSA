class Solution {
public:
    void f(vector<int>&nums, vector<vector<int>>&ans,vector<int>&temp,int index){
       if(index==nums.size()){
           ans.push_back(nums);
           return;
       }
        
       for(int i=index;i<nums.size();i++){
          swap(nums[i],nums[index]);
           f(nums,ans,temp,index+1);
           swap(nums[i],nums[index]);
       }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int>fre(nums.size(),0);
        f(nums,ans,temp,0);
        return ans;
    }
};