// 1438. D96_M_POTD_Longest_Continuous_Subarray_Absolute_Diff
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>s;
        int i=0,j=0,ans=0;
        while(j<nums.size()){
            s.insert(nums[j]);
            while(i<j && (*s.rbegin()- *s.begin()) >limit){
                s.erase(s.find(nums[i]));
                i++;
            }
            ans=max(ans,(int)s.size());
            j++;
        }
        return ans;
    }
};
 
// Q:https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/?envType=daily-question&envId=2024-06-23
// A:https://www.youtube.com/watch?v=dlvajECagM4