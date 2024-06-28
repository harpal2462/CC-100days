// 931. D38_M_Minimum_Falling_Path_Sum
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;
        int n=matrix.size();
        if(n==1) return matrix[0][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    matrix[i][j]=matrix[i][j]+min(matrix[i-1][j],matrix[i-1][j+1]);
                    continue;
                }
                if(j==n-1){
                    matrix[i][j]=matrix[i][j]+min(matrix[i-1][j],matrix[i-1][j-1]);
                    continue;                    
                }
                matrix[i][j]=matrix[i][j]+min( { matrix[i-1][j-1],matrix[i-1][j],matrix[i-1][j+1] } );
            }
        }
        for(auto i:matrix[n-1]){
            ans=min(ans,i);
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/minimum-falling-path-sum/description/