// 713. Subarray Product Less Than K 
// Sliding Window

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,right=0,count=0;
        int prod=1;
        if(k<=1) return 0;
        while(right<n){
            prod*=nums[right];
            while(prod>=k){
                prod/=nums[left];
                left++;
            }
            count+=1+(right-left);
            right++;
        }
        return count;
    }
};

// Q:https://leetcode.com/problems/subarray-product-less-than-k/
// A:https://leetcode.com/problems/subarray-product-less-than-k/solutions/4930464/sliding-window-in-action-counting-subarrays-with-product-less-than-k