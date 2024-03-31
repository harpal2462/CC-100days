// Sliding Window: 3101. Count Alternating Subarrays (MEDIUM)
// You are given a binary array nums.
// We call a subarray alternating if no two adjacent elements in the subarray have the same value.
// Return the number of alternating subarrays in nums.
// Example 1: Input: nums = [0,1,1,1] Output: 5
// Explanation: The following subarrays are alternating: [0], [1], [1], [1], and [0,1].
class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long int n=nums.size();
        long long int l=0,r=1,ans=n;
        while(r<n){
            if(nums[r]!=nums[r-1]){
                ans+=r-l;
            }else{
                l=r;
            }
            r++;
        }
        return ans;
    }
};
// Q:  https://leetcode.com/problems/count-alternating-subarrays/
// A1: https://leetcode.com/problems/count-alternating-subarrays/solutions/4949581/c-sliding-window-counting-explained
// A2: https://leetcode.com/problems/count-alternating-subarrays/solutions/4949791/simple-c-solution-counting