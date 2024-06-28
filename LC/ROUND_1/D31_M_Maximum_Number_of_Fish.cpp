// 2658. D31_M_Maximum_Number_of_Fish 
//Similar to (695. D30 Max Area of Island & 200.D31 Number of Islands)
class Solution {
public:
    int temp=0;
    void dfs(vector<vector<int>>& grid,int row,int col){
        if(row<0 || row>=grid.size()|| col<0 || col>=grid[0].size() || grid[row][col]==0) return;
        temp+=grid[row][col];
        grid[row][col]=0;
        dfs(grid,row+1,col);
        dfs(grid,row-1,col);
        dfs(grid,row,col+1);
        dfs(grid,row,col-1);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]!=0){
                    dfs(grid,i,j);
                    ans=max(ans,temp);
                    temp=0;
                } 
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/