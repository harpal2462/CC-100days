// D30_E_POTD_Island_Perimeter // asked in multiple companies 
// No dfs because its TC will be 4^N which is worst than N^2 use dfs when multiple lans are there.
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    ans+=4;
                    if(i-1>=0 && grid[i][j]==grid[i-1][j]){
                        ans-=2;
                    }
                    if(j-1>=0 && grid[i][j]==grid[i][j-1]){
                        ans-=2;
                    }
                }
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/island-perimeter/