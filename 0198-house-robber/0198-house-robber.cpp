class Solution {
public:
    int rob(vector<int>& nums) {
        int n =nums.size();
        vector<int>dp(n+1,-1);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int take = nums[i];
            if(i>1){
               take = take + dp[i-2];
            }
            int ntake = 0 + dp[i-1];
            dp[i]= max(take,ntake);
        }
        return dp[n-1];
    }
};

// dp[0]= arr[0];
    
//     for(int i=1 ;i<n; i++){
//         int pick = arr[i];
//         if(i>1)
//             pick += dp[i-2];
//         int nonPick = 0+ dp[i-1];
        
//         dp[i]= max(pick, nonPick);
//     }
    
    
//     return dp[n-1];