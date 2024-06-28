// 137. D73_H_Single_Number_II
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int sum=0;
            for(int j=0;j<nums.size();j++){
                if((nums[j]>>i)&1==1){
                    sum++;
                    sum%=3;
                }
            }
            if(sum!=0) ans=ans|(sum<<i);
        }
        return ans;
    }
};


// Q:https://leetcode.com/problems/single-number-ii/description/
// https://leetcode.com/problems/single-number-ii/solutions/3715277/image-explanation-bit-manipulation-4-methods-c-java-python