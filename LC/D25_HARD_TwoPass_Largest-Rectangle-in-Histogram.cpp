// 84. Largest Rectangle in Histogram
// Two Pass Solution 
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) { 
        int n=heights.size();                      // index=    [0,1,2,3,4,5]
        stack<int>st;                              //heights=   [2,1,5,6,2,3]
        int leftSmall[n]; //storing indexes      //leftSmall=   [0,0,2,3,2,5]
        int rightSmall[n];                      //rightSmall=   [0,5,3,3,5,5]

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()) leftSmall[i]=0;
            else leftSmall[i]=st.top()+1;
            st.push(i);
        }
        while(!st.empty()) st.pop(); // empty the stack for reuse
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()) rightSmall[i]=n-1;
            else rightSmall[i]=st.top()-1;
            st.push(i);
        }
        int maxArea=0;
        for(int i=0;i<n;i++){
            maxArea=max(maxArea, (heights[i]*(rightSmall[i]-leftSmall[i]+1) ) );
        }
        return maxArea;
    }
};

// Q:https://leetcode.com/problems/largest-rectangle-in-histogram/
// A:https://www.youtube.com/watch?v=X0X6G-eWgQ8