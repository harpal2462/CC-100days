// 260. D73_H_POTD_Single_Number_III
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ab=0;
        for(auto i:nums){
            ab^=i;
        }
        int diff_bit=1;
        while((diff_bit & ab) ==0) diff_bit<<=1;

        int a=0,b=0;
        for(int num:nums){
            if( (num & diff_bit) ==0) a^=num;
            else b^=num;
        }
        return {a,b};
    }
};

// Q:https://leetcode.com/problems/single-number-iii/description/?envType=daily-question&envId=2024-05-31

// A:https://www.youtube.com/watch?v=faoVORjd-T8