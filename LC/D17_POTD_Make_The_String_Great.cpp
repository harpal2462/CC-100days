// 1544. Make The String Great
class Solution {
public:
    string makeGood(string s) {
        string ans;
        stack<char>st;
        if(s.size()<2) return s;
        for(int i=0;i<s.size();i++){ 
            if( !st.empty() and abs(s[i]-st.top())==32){  // always check and use: !st.empty() 
                st.pop();
            } 
            else st.push(s[i]);  
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());  // inbuilt function to reverse a string 
        return ans;
    }
};


// Q: https://leetcode.com/problems/make-the-string-great/?envType=daily-question&envId=2024-04-05
// A: https://leetcode.com/problems/make-the-string-great/solutions/965029/simple-c-stack-solution-4ms