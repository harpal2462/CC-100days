//678. Valid Parenthesis String
class Solution {
public:
    bool checkValidString(string s) {
        stack<char>open,star;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open.push(i);
            if(s[i]=='*') star.push(i);
            if(s[i]==')'){
                if(!open.empty()) open.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }    
        }
        while(!open.empty() && !star.empty() && star.top()>open.top() ){
            open.pop();
            star.pop();
        }

        if(open.empty()) return true;
        else return false;
    }
};


// Q:https://leetcode.com/problems/valid-parenthesis-string/?envType=daily-question&envId=2024-04-07
// A:https://leetcode.com/problems/valid-parenthesis-string/solutions/3401476/made-easy-c-w-comments