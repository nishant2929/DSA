class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int cnt=1;
        if(nums.size()==1){
            return nums;
        }
        if(nums.size()==2){
            if(nums[0]==nums[1]){
                 v.push_back(nums[0]);
                return v;
            }else{
                return nums;
            }
        }
     for(int i=0;i<nums.size()-1;i++){
         if(nums[i]==nums[i+1]){
             cnt++;
         }else{
             if(cnt>nums.size()/3){
                 v.push_back(nums[i]);
                 
             }
             cnt=1;
         }
     }
               if(cnt>nums.size()/3){
                 v.push_back(nums[nums.size()-1]);
                
             }
        return v;
    }     
};
