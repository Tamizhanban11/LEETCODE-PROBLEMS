class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p=0,count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1) p++;
                if(j<grid[i].size()-1 && (grid[i][j]==1 && grid[i][j+1]==1))count++;
                if(i<grid.size()-1 && grid[i][j]==1 &&grid[i+1][j]==1) count++;
 
            }
        }
       return (4*p-2*count); 
    }
};