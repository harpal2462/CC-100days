// 1509. D106_M_Minimum_Difference_Between_MAX_MIN_Three_Moves
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<4) return 0;
        sort(nums.begin(),nums.end());
        int mn=INT_MAX;
        mn=min(mn,nums[n-1]-nums[3]); // Remove the three smallest elements
        mn=min(mn,nums[n-4]-nums[0]); // Remove the three largest elements
        mn=min(mn,nums[n-2]-nums[2]); // Remove the two smallest and the largest
        mn=min(mn,nums[n-3]-nums[1]); // Remove the smallest and the two largest

        return mn;
        
    }
};

// Q:https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/?envType=daily-question&envId=2024-07-03