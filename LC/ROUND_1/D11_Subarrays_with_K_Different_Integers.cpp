// Sliding Window 992. Subarrays with K Different Integers(HARD)
class Solution {
public:
    int atmostk(vector<int>nums,int k,int n){
        int l=0,r=0,ans=0;
        unordered_map<int,int>m;
        while(r<n){                
            m[nums[r]]++;
            while(m.size()>k){
                m[nums[l]]--;
                if(m[nums[l]]==0) m.erase(nums[l]);
                l++;
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        return atmostk(nums,k,n)-atmostk(nums,k-1,n); 
        // Exact k unique integers = (Atmost k unique) - (Atmost k-1 unique)
        // for k=2: 
        // Atmost 2 unique= 12 subarrays and Atmost k-1= 1 unique = 5 subarrays
        // so for exact k=2 : 12-5 = 7 good subarray
    }
};

// Q: https://leetcode.com/problems/subarrays-with-k-different-integers/?envType=daily-question&envId=2024-03-30

// A: https://leetcode.com/problems/subarrays-with-k-different-integers/solutions/4944691/simplified-algorithm-explained-with-visual-example-c-java