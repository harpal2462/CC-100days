// 695. D30_M_Max_Area_of_Island

class Solution {
public:
    int temp=0;
    void dfs(vector<vector<int>>& grid,int row,int col){
        if(row<0 || row>=grid.size()|| col<0 || col>=grid[0].size() || grid[row][col]==0) return;
        temp+=1;
        grid[row][col]=0;
        dfs(grid,row+1,col);
        dfs(grid,row-1,col);
        dfs(grid,row,col+1);
        dfs(grid,row,col-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j);
                    ans=max(ans,temp);
                    temp=0;
                } 
            }
        }
        return ans;
    }

};

Q:https://leetcode.com/problems/max-area-of-island/