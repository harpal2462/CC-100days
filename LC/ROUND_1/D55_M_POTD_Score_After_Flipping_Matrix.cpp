// 861. D55_M_POTD_Score_After_Flipping_Matrix     
// Nice Greedy and Bit Manipulation Problem
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int ans=  row * 1<<(col-1) ;
        for(int j=1;j<col;j++){
            int ones_count=0;
            int zeros_count=0;
            for(int i=0;i<row;i++){
                if(grid[i][0]==0) ones_count+=(grid[i][j]^1);
                else ones_count+=grid[i][j];
            }
            zeros_count= row-ones_count;
            if(ones_count>= zeros_count) ans+=ones_count*(1<<col-j-1);
            else ans+= zeros_count*(1<<col-j-1);    // Flipped 
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/score-after-flipping-matrix/description/?envType=daily-question&envId=2024-05-13

// A:https://www.youtube.com/watch?v=1c5HnSKNABA