// 2233. D87_M_Max_Product_After_K_Increments
class Solution {
public:
    int mod=1e9+7;
    int maximumProduct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(k--){
            nums[i]++;
            if( i<nums.size()-1 && nums[i]>nums[i+1]) i++;
            else i=0;
        }
        long long int prod=1;
        for(auto num:nums){
            prod=(prod*num)%mod;
        }
        return prod;
    }
};

// Q:https://leetcode.com/problems/maximum-product-after-k-increments/description/