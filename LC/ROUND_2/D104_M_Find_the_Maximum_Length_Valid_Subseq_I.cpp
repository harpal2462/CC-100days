// 3201. D104_M_Find_the_Maximum_Length_Valid_Subseq_I

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        vector<int>check;
        int mx=-2;
        int odd=0,even=0;
        for(int j=0;j<n;j++){
            int mod=nums[j]%2;
            mod==1?odd++:even++;
            if(check.empty()) check.push_back(mod);
            else if(check[check.size()-1] != mod) check.push_back(mod);
        }
        int both= check.size();
        int ans=max(both,max(odd,even));
    
        return ans;
    }
};

// Q:https://leetcode.com/problems/find-the-maximum-length-of-valid-subsequence-i/