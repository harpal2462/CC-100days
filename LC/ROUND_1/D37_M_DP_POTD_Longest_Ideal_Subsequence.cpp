// 2370. D37_M_DP_POTD_Longest_Ideal_Subsequence
class Solution {
public:
    int longestIdealString(string s, int k) {
        int n=s.size();
        int ans=0;
        vector<int>dp(26,0);

        for(int i=0;i<n;i++){
            int maxlen=0;
            int elem=s[i]-'a';
            int left= max(0,elem-k);
            int right= min(25,elem+k);
            for(int j=left;j<=right;j++){
                maxlen=max(maxlen,dp[j]);
            }
            dp[elem]=maxlen+1;
            ans=max(ans,dp[elem]);
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/longest-ideal-subsequence/description/?envType=daily-question&envId=2024-04-25
// A: https://www.youtube.com/watch?v=kGHL46IvyTY