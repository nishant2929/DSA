class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        set<int> s(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
       for(auto it : s){
           if(s2.find(it)!=s2.end()){
               v.push_back(it);
           }
       }
        return v;
    }
};