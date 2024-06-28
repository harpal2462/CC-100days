// 205. Isomorphic Strings
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>ms; // map for string s
        unordered_map<char,char>mt; // map for string t
        for(int i=0;i<s.size();i++){
            ms[s[i]]=t[i];
            mt[t[i]]=s[i];
        }
        for(int i=0;i<s.size();i++){
            if(ms[s[i]]!=t[i] or mt[t[i]]!=s[i] ) return false; 
        }
        return true;
    }
};

// Q: https://leetcode.com/problems/isomorphic-strings/

// A: https://leetcode.com/problems/isomorphic-strings/solutions/4962423/step-by-step-explanation-7-lines-of-code-easy-to-understand