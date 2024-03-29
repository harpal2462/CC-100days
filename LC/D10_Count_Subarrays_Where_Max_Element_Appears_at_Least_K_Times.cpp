// Sliding Window  2962. Count Subarrays Where Max Element Appears at Least K Times
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        long long int mx= *max_element(nums.begin(),nums.end());
        long long int l=0,r=0,count=0,ans=0; // l=left and r=right
        while(r<n){
            if(nums[r]==mx) count++;
            while(count>=k){
                ans+=(n-r);
                if(nums[l]==mx) count--;
                l++;
            }
            r++;
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/?envType=daily-question&envId=2024-03-29

// A:https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/solutions/4940242/simplified-algorithm-explained-with-visual-example-c-java