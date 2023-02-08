class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a)
    {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>> r;
        vector<int> max_overlap;
        max_overlap.push_back(a[0][0]);
        max_overlap.push_back(a[0][1]);
        for(int i=1;i<n;i++)
        {
            if(a[i][0]<=max_overlap[1])
            {
                max_overlap[1]=max(max_overlap[1],a[i][1]);  // 
            } 
            else
            {
                r.push_back(max_overlap);  //
                max_overlap[0]=a[i][0];
                max_overlap[1]=a[i][1];
            }
        }
        r.push_back(max_overlap);
        return r; 
    }
};

// class Solution {
// public:
//      vector<vector<int>> merge(vector<vector<int>>& interval) {
//         vector<vector<int>> ans;
//        // if(interval.size()==0)return ans;
//         sort(interval.begin(),interval.end());
//         ans.push_back(interval[0]);
//         int j=0;
//         for(int i=1;i<interval.size();i++)
//         {
//             if(ans[j][1]>=interval[i][0])
//                 ans[j][1]=max(ans[j][1],interval[i][1]);
//             else
//             {
//                 j++;
//                 ans.push_back(interval[i]);
//             }
//         }
//         return ans;
//     }
// };
