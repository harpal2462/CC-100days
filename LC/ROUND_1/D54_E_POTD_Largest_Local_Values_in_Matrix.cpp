// 2373. D54_E_POTD_Largest_Local_Values_in_Matrix
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2) );
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                for(int k1=i;k1<i+3;k1++){
                    for(int k2=j;k2<j+3;k2++){
                        ans[i][j]=max(ans[i][j],grid[k1][k2]);
                    }
                }
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/largest-local-values-in-a-matrix/description/?envType=daily-question&envId=2024-05-12