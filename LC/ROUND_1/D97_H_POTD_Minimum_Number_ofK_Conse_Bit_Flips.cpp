// 995. D_97_H_POTD_Minimum_Number_ofK_Conse_Bit_Flips
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,flip=0;
        for(int i=0;i<n;i++){
            if(flip%2==nums[i]){
                if(i>n-k) return -1;
                ans++;
                flip++;
                nums[i]-=2;
                
            }
            if(i>=k-1 && nums[i-k+1]<0){
                flip++;
                nums[i-k+1]+=2;
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/?envType=daily-question&envId=2024-06-24