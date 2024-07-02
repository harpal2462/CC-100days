// 3002. D105_M_Maximum_Size_of_Set_After_Removals
class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        unordered_set<int>s2;
        unordered_set<int>combinedSet;
        for(auto num1:nums1) s1.insert(num1) ,combinedSet.insert(num1);
        for(auto num2:nums2) s2.insert(num2) , combinedSet.insert(num2);
        int tempAns= min(s1.size(),nums1.size()/2)+min(s2.size(),nums2.size()/2);
        return min((int)combinedSet.size(), tempAns);
    }
};

// Q:https://leetcode.com/problems/maximum-size-of-a-set-after-removals/