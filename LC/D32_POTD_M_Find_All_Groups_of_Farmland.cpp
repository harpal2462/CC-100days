// 1992. D32_POTD_M_Find_All_Groups_of_Farmland
class Solution {
public:
    int maxrow=-1;
    int maxcol=-1;
    void dfs(vector<vector<int>>&land,int row,int col, vector<int>&temp){
        if(row<0||row>=land.size()||col<0||col>=land[0].size()||land[row][col]==0) return;
        land[row][col]=0;
        maxrow=max(maxrow,row);
        maxcol=max(maxcol,col);

        dfs(land,row+1,col,temp);
        dfs(land,row,col+1,temp);
        dfs(land,row-1,col,temp);
        dfs(land,row,col-1,temp);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int r=land.size();
        int c=land[0].size();
        vector<vector<int>>ans;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(land[i][j]==1){
                    vector<int>temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    dfs(land,i,j,temp);
                    temp.push_back(maxrow);
                    temp.push_back(maxcol);
                    ans.push_back(temp);
                    maxrow=-1;
                    maxcol=-1;
                }
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/find-all-groups-of-farmland/?envType=daily-question&envId=2024-04-20