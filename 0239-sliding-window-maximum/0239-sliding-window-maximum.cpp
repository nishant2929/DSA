class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int> v;
        int i=0,j=0;
        int n=nums.size();
        while(j<n){
            pq.push({nums[j],j});
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                while(pq.top().second<i){
                    pq.pop();
                }
                int temp=pq.top().first;
                v.push_back(temp);
                // if(temp==nums[i]){
                //     pq.pop();
                // }
                // pq.erase(nums[i]);
                i++;
                j++;
            }
        }
        return v;
    }
};