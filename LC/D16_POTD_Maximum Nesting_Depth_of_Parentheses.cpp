// 1614. Maximum Nesting Depth of the Parentheses
class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int depth=0,mxdepth=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                depth++;
                mxdepth=max(mxdepth, depth);
            }else if(s[i]==')') depth--;
        }
        return mxdepth;
    }
};

// Q:https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/?envType=daily-question&envId=2024-04-04
// A:https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/solutions/4969587/96-33-easy-solution-with-explanation