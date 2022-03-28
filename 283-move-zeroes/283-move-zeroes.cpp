class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int right=0;
        int left=0;
        int temp=0;
        while(right<nums.size()){
            if(nums[right]==0){
                right++;
            }else{
                temp=nums[left];
                nums[left]=nums[right];
                nums[right]=temp;
                right++;
                left++;
            }
        }
            
    }
};