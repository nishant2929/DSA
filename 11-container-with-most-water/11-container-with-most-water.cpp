class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxi=INT_MIN;
        while(left<right){
           int ans= max(min(height[left],height[right])*(right-left) , ans);
            maxi = max(ans,maxi);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
            
        }
        return maxi;
    }
};