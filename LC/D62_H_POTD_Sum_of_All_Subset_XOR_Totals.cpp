// 1863. D62_H_POTD_Sum_of_All_Subset_XOR_Totals
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<(1<<n);i++){
            int subxor=0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)) subxor^=nums[j];
            }
            sum+=subxor;
        }
        return sum;
    }
};



// Q:https://leetcode.com/problems/sum-of-all-subset-xor-totals/?envType=daily-question&envId=2024-05-20
// A:https://leetcode.com/problems/sum-of-all-subset-xor-totals/solutions/5182332/faster-lesser-2-methods-detailed-approach-brute-force-recursion-python-java-c