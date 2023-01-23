class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0;
        //int sum=0;
        int ret =INT_MIN;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            ret =max(ret,ans);
            if(ans<0){
                ans=0;
            }
            
        }
      return ret;
    }
};