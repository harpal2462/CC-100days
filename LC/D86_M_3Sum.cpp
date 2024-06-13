// 15. D86_M_3Sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {   //TC: O(nlogn)+ ~O(n^2) 
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());          // TC: O(nlogn)
        for(int i=0;i<n;i++){                  // Tc: ~O(n^2)
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0) k--;
                else if(sum<0) j++;
                else{
                    ans.push_back( { nums[i],nums[j],nums[k] } );
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/3sum/description/