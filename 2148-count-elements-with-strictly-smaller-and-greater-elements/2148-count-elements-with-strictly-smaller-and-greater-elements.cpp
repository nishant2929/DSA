class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        if(nums.size()==1 or nums.size()==2){
            return 0;
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[0] and nums[i]<nums[nums.size()-1]){
                count++;
            }
            }
        return count;
 
    }
    
};