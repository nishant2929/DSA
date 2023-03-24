class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
         map<int,pair<int,int>> mp;
        if(grid[0][0]!=0){
            return false;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mp[grid[i][j]] = {i,j};
            }
        }
        
        vector<pair<int,int>> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        for(int i=1; i<ans.size(); i++){
            if(abs(ans[i].first - ans[i-1].first) + abs(ans[i].second - ans[i-1].second) != 3 or
               (abs(ans[i].first - ans[i-1].first) == 3 && abs(ans[i].second - ans[i-1].second) == 0) or
               (abs(ans[i].first - ans[i-1].first) == 0 && abs(ans[i].second - ans[i-1].second) == 3)){
                return false;
            }
        }
        return true;
    }
};
