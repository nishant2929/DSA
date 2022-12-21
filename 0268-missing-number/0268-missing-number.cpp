class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int j=1;j<nums.size();j++){
            if(nums[j]-nums[j-1]!=1){
                return nums[j-1]+1;
            }
        }
        if(nums[0]==0){
           return nums.back()+1;
           
        }
        else{
            return 0;
        }
    }
};