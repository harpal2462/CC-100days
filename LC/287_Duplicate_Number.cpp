// 287. Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.
// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];

        }while(slow!=fast);  // intersection point of the two pointers 

        // Find the entrance of the cycle
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
// Better Solution :
    // int findDuplicate(vector<int>& nums) {
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[abs(nums[i]) -1] <0 ) return abs(nums[i]);
    //         nums[abs(nums[i])-1]*=(-1);
    //     }
    //     return 0;
    // }