// 1004. D113_M_Max_Consecutive_Ones_III
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int count = 0;
        int i = 0, j = 0;
        while (j < nums.size()) {
            if (nums[j] == 0) count++;
            while (count > k) {
                if (nums[i] == 0) count--;
                i++;
            }
            ans = max(ans, (j - i + 1));
            j++;
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/max-consecutive-ones-iii/