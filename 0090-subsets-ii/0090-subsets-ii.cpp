class Solution {
public:
    void f(vector<int>& nums, vector<vector<int>>&ans,int n,vector<int>&v,int index){
      
           ans.push_back(v);
       
        for(int i=index;i<n;i++){
            if(i>index&&nums[i]==nums[i-1])continue;
            v.push_back(nums[i]);
            f(nums,ans,n,v,i+1);
            v.pop_back();
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int>v;
        int size=nums.size();
        f(nums,ans,size,v,0);
        return ans;
    }
};