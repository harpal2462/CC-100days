// 3075. D51_M_POTD_Maximize_Happiness_of_Selected_Children
class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {

        long long ans=0;
        sort(h.begin(),h.end(),greater<int>());
        for(int i=0;i<k;i++){
            ans+=max(h[i]-i,0);
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/maximize-happiness-of-selected-children/?envType=daily-question&envId=2024-05-09