// 1289. D38_H_POTD_Minimum_Falling_Path_Sum_II
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int ans=INT_MAX;
        int n=grid.size();
        if(n==1) return grid[0][0];

        vector<int>mini(n);             // for Storing Minimum value from each row
        vector<int>Smini(n);            // for Storing SECOND Minimum value from each row
        vector<int>temp=grid[0];
        sort(temp.begin(),temp.end());
        mini[0]=temp[0];                // Minimum value from first row
        Smini[0]=temp[1];               // Second Minimum value from first row
    
        for(int i=1;i<n;i++){

            for(int j=0;j<n;j++){
                if(grid[i-1][j]!=mini[i-1]){ 
                    grid[i][j]+=mini[i-1];
                }else{
                    grid[i][j]+=Smini[i-1]; // if above cell is equal to Minimum than we have to choose Second minimum  
                }
            }
            temp=grid[i];
            sort(temp.begin(),temp.end());
            mini[i]=temp[0];
            Smini[i]=temp[1];
        }

        return mini[n-1];         // Minimum value from Last ROw
    }
};

// Q:https://leetcode.com/problems/minimum-falling-path-sum-ii/
