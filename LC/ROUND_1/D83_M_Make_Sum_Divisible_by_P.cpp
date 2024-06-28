// 1590. D83_M_Make_Sum_Divisible_by_P
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long int sum=0;
        for(auto num:nums) sum+=num;
        int k=sum%p;
        if(k==0) return 0;
        sum=0;
        unordered_map<int,int>m;
        m[0]=-1;
        int len=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem2=sum%p;
            if(m.count(rem2-k))   len=min(len,(i-m[rem2-k]));
            if(m.count(rem2-k+p)) len=min(len,(i-m[rem2-k+p]));   
            m[rem2]=i;
        }
        if(len>=nums.size()) return -1;
        return len;
    }
};

// Q:https://leetcode.com/problems/make-sum-divisible-by-p/
// A:https://www.youtube.com/watch?v=FcadUHcFseA