// 1608. D69_E_POTD_Special_Array_With_X_Elements
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int temp=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=n-i && n-i>temp) return n-i;
            temp=nums[i];
        }
        return -1;
    }
};

// Q:https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/?envType=daily-question&envId=2024-05-27