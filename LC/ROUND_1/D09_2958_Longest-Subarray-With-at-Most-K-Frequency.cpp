//Sliding Window problem :2958. Length of Longest Subarray With at Most K Frequency
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        int mx=0;
        int l=0,r=0;
        while(r<n){
            m[nums[r]]++;
            while(m[nums[r]]>k){
                m[nums[l]]--;
                l++;
            }
            mx=max(mx,(r-l+1));
            r++;
        }
        return mx;
    }
};

// Q:https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
