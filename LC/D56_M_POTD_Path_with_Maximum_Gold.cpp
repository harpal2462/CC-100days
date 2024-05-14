// 1219. D56_M_POTD_Path_with_Maximum_Gold
class Solution {
public:
    int row,col;
    int ans=0;
    void dfs(vector<vector<int>>& grid,int i,int j,int temp_sum){
        if(i<0|| j<0 || i>=row || j>=col || grid[i][j]==0) return;
        int tmp= grid[i][j];
        grid[i][j]=0;
        temp_sum+=tmp;

        dfs(grid,i+1,j,temp_sum);
        dfs(grid,i-1,j,temp_sum);
        dfs(grid,i,j+1,temp_sum);
        dfs(grid,i,j-1,temp_sum);

        ans=max(ans,temp_sum);
        grid[i][j]=tmp;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        row=grid.size();
        col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]!=0){
                    dfs(grid,i,j,0);
                }
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/path-with-maximum-gold/