//  D30_M_Flood_Fill_Better_sol 
// used another 2d matrix to store ans
class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int intial,vector<vector<int>> &ans){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size()) return; // Don't sr> its sr>=image.size()
        if(image[sr][sc]!=intial || ans[sr][sc]==color) return; // img[i][j]==color to avoid infinite self loop 
        ans[sr][sc]=color;

        dfs(image,sr+1,sc,color,intial,ans);
        dfs(image,sr-1,sc,color,intial,ans);
        dfs(image,sr,sc+1,color,intial,ans);
        dfs(image,sr,sc-1,color,intial,ans);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans= image;
        int intial= image[sr][sc];
        dfs(image,sr,sc,color,intial,ans);
        return ans;
    }
};

// Q: https://leetcode.com/problems/flood-fill/
// A: https://leetcode.com/problems/flood-fill/solutions/4745988/easy-dfs-solution-c