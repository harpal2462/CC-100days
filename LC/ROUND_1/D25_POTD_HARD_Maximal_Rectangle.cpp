// D25 85. Maximal Rectangle Similar to 84. Largest Rectangle in Histogram

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int col= matrix[0].size();
        int maxA=0;
        vector<int>hist(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='1') hist[j]++;
                else hist[j]=0;
            }
            stack<int>st;
            int n=hist.size();
    
            for(int i=0;i<=n;i++){
                while(!st.empty()&& (i==n || hist[st.top()]>=hist[i] ) ){
                    int height=hist[st.top()];
                    st.pop();
                    int width= st.empty() ? i:i-st.top()-1;
                    maxA=max(maxA,height*width);
                }
                st.push(i);
            }
        }
        return maxA;
    }
};

// Q:https://leetcode.com/problems/maximal-rectangle/
// A: https://www.youtube.com/watch?v=tOylVCugy9k