class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=0;
        int e=1;
       while(e<nums.size())
       {
           if(nums[e]>nums[s]){
               s++;
               swap(nums[s],nums[e]);
           }
           e++;
       }
        return s+1;
    }
    
};