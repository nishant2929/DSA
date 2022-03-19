class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        
        for(int i=1; i<=nums.size(); i++){
            res.push_back(accumulate(nums.begin(), (nums.begin()+i), 0));
        }
        return res;
    }
};