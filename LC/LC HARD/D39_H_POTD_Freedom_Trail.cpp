// 514. D39_H_POTD_Freedom_Trail   Best Dp Question till now.
class Solution {
public:
    vector<vector<int>> dp;

    int dis(int ringIndex, int i, int ringsize){
        int stepsBetween= abs(i-ringIndex);
        int stepsAround= ringsize- stepsBetween;
        return min(stepsBetween, stepsAround);
    }

    int solve(int ringIndex, int keyIndex, string ring, string key){
        if(keyIndex==key.size()) return 0;
        if(dp[ringIndex][keyIndex]!=-1) return dp[ringIndex][keyIndex];
        int minSteps=INT_MAX;
        for(int i=0;i<ring.size();i++){
            if(ring[i]==key[keyIndex]){
                int total=dis(ringIndex,i,ring.size())+ 1 + solve(i,keyIndex+1, ring , key);
                minSteps=min(minSteps,total);
            }
        }
        return dp[ringIndex][keyIndex]=minSteps;
    }

    int findRotateSteps(string ring, string key) {
        int n=ring.size(), m=key.size();
        dp = vector<vector<int>> (n, vector<int>(m,-1));
        return solve(0,0,ring,key);

    }
};

// Q:https://leetcode.com/problems/freedom-trail/description/?envType=daily-question&envId=2024-04-27
// A: https://www.youtube.com/watch?v=14h9OuYf2GA