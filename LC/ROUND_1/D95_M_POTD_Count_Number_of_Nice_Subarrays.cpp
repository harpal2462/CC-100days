// 1248. D95_M_POTD_Count_Number_of_Nice_Subarrays
class Solution {
public:
    int subArrayLessThanEqualTo(vector<int>& nums, int k){
        int i=0,j=0,ans=0,count=0,n=nums.size();
        while(j<n){
            if(nums[j]%2) count++;
            while(i<=j && count>k){
                if(nums[i]%2) count--;
                i++;
            }
            ans+= j-i+1;
            j++;
        }
        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return subArrayLessThanEqualTo(nums,k)
                -subArrayLessThanEqualTo(nums,k-1);
    }
};

// Q:https://leetcode.com/problems/count-number-of-nice-subarrays/?envType=daily-question&envId=2024-06-22
// A:https://www.youtube.com/watch?v=dhu5_v2iY8E