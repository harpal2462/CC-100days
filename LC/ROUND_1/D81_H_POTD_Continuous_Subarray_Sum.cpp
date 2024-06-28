// 523. D81_H_POTD_Continuous_Subarray_Sum
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        m[0]=0;
        int psum=0;
        for(int i=0;i<n;i++){
            psum=(psum+nums[i])%k;
            if(m.find(psum)!=m.end()){
                if(i+1-m[psum] >=2) return true;       // length of subarray >=2
            }else m[psum]=i+1;
        }
        return false;

    }
};

// Q:https://leetcode.com/problems/continuous-subarray-sum/?envType=daily-question&envId=2024-06-08
// A:https://www.youtube.com/watch?v=1W_HYBqvDLw