class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
           int res=0;
        for(int i=0;i<n;i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
            for(int i=0;i<m;i++)
            {
                int maxx=INT_MIN;
                for(int j=0;j<n;j++)
                {
                maxx=max(maxx,grid[j][i]);
                }
            
                res+=maxx;
             }
        return res;

    }
};
