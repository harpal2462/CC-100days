// 560. D81_M_Subarray_Sum_Equals_K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int sum=0,count=0;
        for(int num:nums){
            sum+=num;
            if(m.count(sum-k)) count+=m[sum-k];
            m[sum]++;
        }
        return count;
    }
};

// Q:https://leetcode.com/problems/subarray-sum-equals-k/