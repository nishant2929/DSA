class Solution {
public:
     void sum(vector<int>& candidates, int size,int target,vector<vector<int>>&ans, vector<int>&temp,int index){
        if(index==size){
            if(target==0){
                ans.push_back(temp);
                return;
            }
            return;
        }
        
        if(candidates[index]<=target){
            temp.push_back(candidates[index]);
            sum(candidates,size,target-candidates[index],ans,temp,index);
            temp.pop_back();
           // target+=candidates[index];
        }
         sum(candidates,size,target,ans,temp,index+1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> temp;
        int n= candidates.size();
        sum(candidates,n,target,ans,temp,0);
        return ans;
    }
};