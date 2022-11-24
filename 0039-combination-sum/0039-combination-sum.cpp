class Solution {
public:
   
void f(int ind , vector<vector<int>>&ans , vector<int>&arr , int target ,vector<int>&ds){
        
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
    if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            f(ind,ans,arr,target-arr[ind],ds);
            ds.pop_back();
        }
        
    f(ind+1,ans,arr,target,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& ar, int sum) {
        vector<vector<int>> ans;
        vector<int> ds;
       f(0,ans,ar,sum,ds);
        return ans;
        
    }
};