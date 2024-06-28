// 2997. D41_M_POTD_Minimum_Operation_Array_XOR_Equal_K 
// see similar question
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int start=0;
        for(auto i:nums){
            start^=i;
        }
        return __builtin_popcount(start^k);
    }
};

// Q:https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/description/?envType=daily-question&envId=2024-04-29