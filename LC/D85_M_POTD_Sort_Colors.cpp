// 75. D85_M_POTD_Sort_Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int right=nums.size()-1;
        int left=0;
        while(i<=right){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                left++;
                i++;
                continue;
            }
            if(nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
                continue;
            }
            i++;
        }
    }
};
// Q:https://leetcode.com/problems/sort-colors/?envType=daily-question&envId=2024-06-12