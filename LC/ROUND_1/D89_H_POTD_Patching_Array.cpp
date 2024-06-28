// 330. D89_H_POTD_Patching_Array
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long int maxNum=0,minPatch=0;
        int i=0;
        while(maxNum<n){
            if(i<nums.size()&& maxNum+1>=nums[i]){
                maxNum+=nums[i];
                i++;
            }else{
                minPatch++;
                maxNum+=(maxNum+1);
            }
        }
        return minPatch;
    }
};

// Q:https://leetcode.com/problems/patching-array/description/?envType=daily-question&envId=2024-06-16