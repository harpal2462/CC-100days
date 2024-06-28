// 139. D66_M_Word_Break             // DP
class Solution {
public:
    bool dp[300];                                           // all false
    bool wordBreak(string s, vector<string>& wordDict) {
        dp[s.size()]=true;

        for(int i=s.size()-1;i>=0;i--){
            for(auto word : wordDict){
                if(i+word.size()<=s.size() && s.substr(i,word.size())==word ){
                    dp[i]=dp[i+word.size()];
                }
                if(dp[i]) break;
            }
        }
        return dp[0];
    }
};


// Q: https://leetcode.com/problems/word-break/
// A: https://www.youtube.com/watch?v=Sx9NNgInc3A