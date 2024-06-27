// 22. D100_H_Generate_Parentheses
class Solution {
public:
    vector<string> ans;
    void generateString(string &s,int open,int close){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open>0){
            s.push_back('(');
            generateString(s,open-1,close);
            s.pop_back();
        }
        if(close>0){
            if(open < close){
                s.push_back(')');
                generateString(s,open,close-1);
                s.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        generateString(s,n,n);
        return ans;;
    }
};

// Q:https://leetcode.com/problems/generate-parentheses/