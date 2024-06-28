// 459. D52_GOOD_Repeated_Substring_Pattern
// Nice Question , Similar question is also pretty good
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int j=1;
        bool ans;
        while(j<=s.size()/2){
            ans=true;
            for(int i=s.size()/2;i<s.size();i++){
                if(s[i]!=s[i%j]) ans=false;
            }
            if(ans==true && s.size()%j==0) return ans;
            j++;
        }
        return false;
    }
};

// Q: https://leetcode.com/problems/repeated-substring-pattern/description/