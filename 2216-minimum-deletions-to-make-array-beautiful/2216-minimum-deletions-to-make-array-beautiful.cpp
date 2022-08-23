class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int del=0;
        for(int i=0;i<nums.size()-1;i++){
            int indexshift=i-del;
            if((nums[i]==nums[i+1]) && indexshift % 2 ==0 ){
                del++;
            }
        }
        
       if((nums.size()- del )%2==1) del++;
         
        return del;
        
    }
};