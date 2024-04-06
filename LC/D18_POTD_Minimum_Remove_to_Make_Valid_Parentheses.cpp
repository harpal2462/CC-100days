// 1249. Minimum Remove to Make Valid Parentheses TC:O(N) SC:O(N)
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i); // Only Open Parentheses INDEX will be pushed to stack   
            else if(s[i]==')'){
                if(st.empty()) s[i]='#';
                else st.pop();
            }
        }
        while(!st.empty()){     // IF Stack is not empty means Extra open'(' in Stack 
            s[st.top()]='#';
            st.pop();
        }
        for(auto it: s){
            if(it!='#') ans+=it;
        }
        return ans;
    }
};


// Q: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/?envType=daily-question&envId=2024-04-06
// A: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/solutions/1850237/c-2-appraches-explained-with-algorithm-easy-simple