class Solution {
public:
    void f(vector<int>&nums, vector<vector<int>>&ans,vector<int>&temp,int index,vector<int>&fre){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        
       for(int i=0;i<nums.size();i++){
          if(fre[i]==0){
              fre[i]=1;
              temp.push_back(nums[i]);
              f(nums,ans,temp,index,fre);
              fre[i]=0;
              temp.pop_back();
          }
       }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int>fre(nums.size(),0);
        f(nums,ans,temp,0,fre);
        return ans;
    }
};