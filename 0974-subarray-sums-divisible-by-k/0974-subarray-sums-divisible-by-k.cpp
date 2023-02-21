class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> mp;
        int sum=0;
       
        int ans=0;
        mp[0]++;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
           int rem = sum%k;
            if(rem<0){
                rem += k;
            }
            if(mp.count(rem)>0){
               ans+=mp[rem];
                mp[rem]++;
        }else{
                mp[rem]++;
            }
        }
        return ans;
    }
};