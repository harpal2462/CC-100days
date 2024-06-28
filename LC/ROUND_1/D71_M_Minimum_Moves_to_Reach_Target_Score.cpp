// 2139. D71_M_Minimum_Moves_to_Reach_Target_Score
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans=0;
        while(target!=1){
            if(maxDoubles!=0){
                if(target%2==0){
                    target/=2;
                    maxDoubles--;
                    ans++;
                }else{
                    target-=1;
                    ans++;
                }
            }else{
                ans+=target-1;
                return ans;
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/minimum-moves-to-reach-target-score/