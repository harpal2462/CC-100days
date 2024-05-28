// 2401. D70_M_Longest_Nice_Subarray
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int num=0,ans=0;
        while(j<n){
            if((num&nums[j])==0){
                num=num|nums[j];
                ans=max(ans,j-i+1);
                j++;
            }else{
                num=num^nums[i];
                i++;
            }
        }
        return ans;
    }
};


// Q:https://leetcode.com/problems/longest-nice-subarray/
// A:https://www.youtube.com/watch?v=Yndp7VnKUUQ