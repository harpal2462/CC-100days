// 2597. D65_M_POTD_The_Number_of_Beautiful_Subsets
class Solution {
public:
    int helper(vector<int>&nums, int k,unordered_map<int,int>&freq, int i){
        if(i==nums.size()) return 1;
        int ans=helper(nums,k,freq,i+1);
        if(!freq[nums[i]-k]){
            freq[nums[i]]++;
            ans+=helper(nums,k,freq,i+1);
            freq[nums[i]]--;
        }
        return ans;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int ,int >freq;
        sort(nums.begin(),nums.end());
        return helper(nums,k,freq,0)-1;
    }
};


// Q:https://leetcode.com/problems/the-number-of-beautiful-subsets/?envType=daily-question&envId=2024-05-23
// A:https://leetcode.com/problems/the-number-of-beautiful-subsets/solutions/3363862/c-java-python-evolve-brute-force-to-dp-explained-7-approaches