class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
     sort(nums.begin(),nums.end());
        int x=nums.size();
        int n=nums[x-1];
        int m=nums[x-2];
        int maxi= (n-1)*(m-1);
        return maxi;
    }
};