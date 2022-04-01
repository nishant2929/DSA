class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         if(nums.size()==1 or nums.size()==2 ){
            return nums[0];
        }
        int cnt=1;
        int newcnt=1;
       
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                cnt++;
                if(cnt>nums.size()/2){
                    return nums[i];
                }
            }else{    
                // if(cnt>nums.size()/2){
                // return nums[i];  
                 cnt=1;
           
            }
                   
                
        }
        return 0;
    }
};