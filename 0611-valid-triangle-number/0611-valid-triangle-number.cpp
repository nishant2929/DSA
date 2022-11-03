class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        for(int i=n-1;i>=1;i--){
            int s=0;
            int e=i-1;
            while(s<e){
            if(nums[s]+nums[e]>nums[i]){
                ans+=(e-s);
                e--;
            }else{
                s++;
            }
        }
        }
        return ans;
    }
};