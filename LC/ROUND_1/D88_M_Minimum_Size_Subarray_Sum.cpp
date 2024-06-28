// 209. D88_M_Minimum_Size_Subarray_Sum
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,sum=0,len=INT_MAX;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                len=min(len,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if(len==INT_MAX) return 0;
        else return len;
    }
};

// Q:https://leetcode.com/problems/minimum-size-subarray-sum/