class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1,s2;
        for(auto it: nums1){
            s1.insert(it);
        }
        for(auto it:nums2){
            s2.insert(it);
        }
        vector<int> ans1;
        vector<int> ans2;
        
//         vector<vector<int>> ans(2);
//         for(auto it: s1){
//             if(s2.count(it)==0)
//                 ans[0].push_back(it);
//         }
        
//         for(auto it: s2){
//             if(s1.count(it)==0)
//                 ans[1].push_back(it);
//         }
        
//         return ans;
//     }
        
        for(auto it : s1){
            if(s2.find(it)==s2.end())
                ans1.push_back(it);
        }
        
          
        for(auto it : s2){
            if(s1.find(it)==s1.end())
                ans2.push_back(it);
        }
        
        return {ans1,ans2};
    }
};