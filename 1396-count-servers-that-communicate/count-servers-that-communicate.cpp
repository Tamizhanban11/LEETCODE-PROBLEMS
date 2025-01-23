class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            int x=-1, y=-1;
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                {
                    if(x==-1 && y==-1)
                    x=i, y=j;
                    else
                    {
                        grid[x][y]=2;
                        grid[i][j]=2;
                    }
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            int x=-1, y=-1;
            for(int i=0;i<m;i++)
            {
                if(grid[i][j])
                {
                    if(x==-1 && y==-1)
                    x=i, y=j;
                    else
                    {
                        grid[x][y]=2;
                        grid[i][j]=2;
                    }
                }
            }
        }
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            if(grid[i][j]==2)
            c++;
        }
        return c;
    }
};