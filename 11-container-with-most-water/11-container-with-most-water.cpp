class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            ans= max((j-i)*min(height[i],height[j]),ans);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};