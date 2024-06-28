class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0 and nums[i]<=n and nums[i]!= nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
    }
};

// Q :https://leetcode.com/problems/first-missing-positive/?envType=daily-question&envId=2024-03-26

// A: https://leetcode.com/problems/first-missing-positive/solutions/767105/short-c-o-n-time-o-1-space-steps-explained