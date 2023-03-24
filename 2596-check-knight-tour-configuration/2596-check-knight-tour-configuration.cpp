class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        int p=n*n-1;

        if(grid[0][0]!=0) return 0;

        vector<pair<int,int>> v(p+1);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) v[grid[i][j]]={i,j};
        }

        bool flag=0;
        for(int i=1;i<=p;i++)
        {
            
            if(!((abs(v[i].first-v[i-1].first)==2 && abs(v[i].second-v[i-1].second)==1)) && !((abs(v[i].first-v[i-1].first)==1 && abs(v[i].second-v[i-1].second)==2))) {flag=1; break;}
        }
        return flag==0;
       
    }
};