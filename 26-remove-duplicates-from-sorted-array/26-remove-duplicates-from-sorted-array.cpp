class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i=0;
     for(int j=0;j<nums.size();j++){
         if(nums[i]< nums[j]){
             i++;
             nums[i]=nums[j];
         }
        
     }
         return i+1;
    }
};

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int j=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[j]!=nums[i]){
//                 j++;
//                 nums[j]=nums[i];
                
//             }
//         }
//         return j+1;
//     }
// };