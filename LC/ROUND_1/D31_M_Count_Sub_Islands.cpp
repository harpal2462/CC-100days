// 1905. D31_M_Count_Sub_Islands
class Solution {
public:
    void dfs(vector<vector<int>> &grid1, int row,int col,vector<vector<int>>&grid2, bool &sub){
        if(row<0||row>=grid2.size()||col<0||col>=grid2[0].size()|| grid2[row][col]==0) return;
        if(grid1[row][col]==0) sub=false;
        grid2[row][col]=0;
        dfs(grid1,row+1,col,grid2,sub);
        dfs(grid1,row-1,col,grid2,sub);
        dfs(grid1,row,col+1,grid2,sub);
        dfs(grid1,row,col-1,grid2,sub);

    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int r=grid2.size();
        int c=grid2[0].size();
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid2[i][j]==1){
                    bool sub = true;
                    dfs(grid1,i,j,grid2,sub);
                    if(sub) ans+=1;
                }
            }
        }
        return ans;
    }
};
// Q:https://leetcode.com/problems/count-sub-islands/