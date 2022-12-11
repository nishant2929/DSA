class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt= 0;
        if(nums.size()<=2){
            return true;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                cnt++;
            }
        }
        if(cnt>0){
            if(nums[0]<nums[nums.size()-1]){
                cnt++;
            }
        }
        if(cnt<2){
            return true;
        }else{
            return false;
        }
    }
};