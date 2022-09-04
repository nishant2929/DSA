class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum = accumulate(nums.begin(),nums.end(),0);
        int leftsum= 0;
        for(int x=0;x<nums.size();x++){
            rightsum -= nums[x];
            if(rightsum==leftsum){
                return x;
            }
            
            leftsum+= nums[x];
        }
        return -1;
    }
};