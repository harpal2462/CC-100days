// 84. Largest Rectangle in Histogram
// ONE Pass Solution Most Optimal TC&SC: O(N)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) { 
        int n=heights.size();                      // index=    [0,1,2,3,4,5]
        stack<int>st;                              //heights=   [2,1,5,6,2,3]
        int maxArea=0;

        for(int i=0;i<=n;i++){
            while(!st.empty() && ( i==n || heights[st.top()]>=heights[i] ) ){
                int height= heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) width=i;
                else width=i-st.top()-1;
                maxArea=max(maxArea,height*width);
            }
            st.push(i);
        }
        return maxArea;
    }
};

// Q:https://leetcode.com/problems/largest-rectangle-in-histogram/
// A:https://www.youtube.com/watch?v=jC_cWLy7jSI