// 733. D30_M_Flood_Fill
// NICE Question it should be in Medium

class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int intial){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size()) return; // Don't sr> it will be sr>=image.size()
        if(image[sr][sc]!=intial || image[sr][sc]==color) return;          // Must Check for previously colored cell to avoid infinite self loop 
        image[sr][sc]=color;

        dfs(image,sr+1,sc,color,intial);
        dfs(image,sr-1,sc,color,intial);
        dfs(image,sr,sc+1,color,intial);
        dfs(image,sr,sc-1,color,intial);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int intial= image[sr][sc];
        dfs(image,sr,sc,color,intial);
        return image;
    }
};


// Q:https://leetcode.com/problems/flood-fill/
// A:https://leetcode.com/problems/flood-fill/solutions/2835910/dfs-explained-c-no-visited-matrix-required