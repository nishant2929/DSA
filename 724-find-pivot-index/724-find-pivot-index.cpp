class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int start=0;
        int end=nums.size();
        for(int i=0;i<end;i++){
             int sumprev=0;
             int sumnext=0;
            for(int j=0;j<i;j++){
                sumprev = sumprev+nums[j];
            }
            
            for(int k=i+1;k<end;k++){
                sumnext=sumnext + nums[k];
                // cout <<"sec"<<sumnext<<" ";
            }
            
            if(sumprev==sumnext){
                return i;
            }
        }
        return -1;
    }
};