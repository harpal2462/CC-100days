// 3164. D74_M_Find_the_Good_Pairs_II
class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]*k]++;
        }
        for(int i=0;i<nums1.size();i++){
            int num=nums1[i];
            for(int j=1;j*j<=num;j++){
                if(num%j!=0) continue;
                ans+=m[j];
                if(j!=num/j) ans+=m[num/j];
            }
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/find-the-number-of-good-pairs-ii/description/
// A:https://www.youtube.com/watch?v=_ez_bh0dLLc