// 300. D37_M_DP_Longest_Increasing_Subsequence
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<int>dp(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(nums[i]>nums[j]) dp[i]=max(dp[i],dp[j]+1);
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/longest-increasing-subsequence/
// A:https://www.youtube.com/watch?v=kGHL46IvyTY