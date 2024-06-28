class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0) ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]*= (-1);
        }
        return ans;
    }
};

// Q: https://leetcode.com/problems/find-all-duplicates-in-an-array/?envType=daily-question&envId=2024-03-25

// A:https://leetcode.com/problems/find-the-duplicate-number/solutions/4916414/c-2-optimal-approaches-o-n-and-o-nlogn-constant-space