class Solution {
public:
    
    void f(vector<int>&candidates,int target , vector<vector<int>>&ans,vector<int>&temp,int index){
        
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        
        if(target>=candidates[index]){
            temp.push_back(candidates[index]);
            f(candidates,target-candidates[index],ans,temp,index);
            temp.pop_back();
        }
        f(candidates,target,ans,temp,index+1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> temp;
        f(candidates,target,ans,temp,0);
        return ans;
    }
};