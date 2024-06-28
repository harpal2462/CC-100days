// D43_E_Make_Square_with_the_Same_Color
class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                unordered_map<char,int>m;
                m[grid[i][j]]++;
                m[grid[i][j+1]]++;
                m[grid[i+1][j]]++;
                m[grid[i+1][j+1]]++;

                if(m['B']!=2 && m['W']!=2) return true;
            }
        }
        return false;
    }
};
// Q:https://leetcode.com/problems/make-a-square-with-the-same-color/
// A:https://leetcode.com/problems/make-a-square-with-the-same-color/solutions/5086911/short-simple-with-explantion-using-map-c-python-java-javascript