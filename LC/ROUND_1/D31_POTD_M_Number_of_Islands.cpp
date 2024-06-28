// D31_POTD_M_Number_of_Islands 
// Similar to (695. D30 Max Area of Island & D31 Maximum Number of Fish in a Grid)

class Solution {
public:
    void dfs(vector<vector<char>>& grid,int row,int col){
        if(row<0 || row>=grid.size()|| col<0 || col>=grid[0].size() || grid[row][col]=='0') return;
        grid[row][col]='0';
        dfs(grid,row+1,col);
        dfs(grid,row-1,col);
        dfs(grid,row,col+1);
        dfs(grid,row,col-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    ans+=1;
                } 
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/number-of-islands/?envType=daily-question&envId=2024-04-19