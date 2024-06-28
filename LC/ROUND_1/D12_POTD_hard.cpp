// 2444. Count Subarrays With Fixed Bounds
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long minpos = -1; 
        long long maxpos=-1;
        long long badindex=-1;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK) badindex=i;
            if(nums[i]==minK) minpos=i;
            if(nums[i]==maxK) maxpos=i;

            long long smaller= min(minpos,maxpos);
            long long temp= smaller-badindex;

            if(temp>0) ans+=temp;
        }
        return ans;
    }
};

// Q: https://leetcode.com/problems/count-subarrays-with-fixed-bounds/description/?envType=daily-question&envId=2024-03-31

// A:https://www.youtube.com/watch?v=z6LwIkEn9qc