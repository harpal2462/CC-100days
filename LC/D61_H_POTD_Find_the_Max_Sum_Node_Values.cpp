// 3068. D61_H_POTD_Find_the_Max_Sum_Node_Values

class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long sum1=0;
        long long sum2=0;
        int count=0;
        for(auto num: nums){
            if( (num^k) > num) sum1+=(num^k), count++;
            else sum2+=num;
        }
        if(count%2==0) return sum1+sum2;
        long long mx1=0;
        long long mx2=0;
        for(auto num:nums){
            if( (num^k)>num ) mx1=max(mx1,sum1-(num^k)+sum2+num);
            else mx2=max(mx2,sum1+(num^k)+sum2 - num);
        }
        return max(mx1,mx2);
    }
};

// Q:https://leetcode.com/problems/find-the-maximum-sum-of-node-values/?envType=daily-question&envId=2024-05-19
// A:https://leetcode.com/problems/find-the-maximum-sum-of-node-values/solutions/4812534/c-greedy-solution-visualized-comprehensive-explanation