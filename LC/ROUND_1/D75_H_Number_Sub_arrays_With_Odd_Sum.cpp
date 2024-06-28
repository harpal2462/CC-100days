// 1524. D75_H_Number_Sub_arrays_With_Odd_Sum
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int modulo=pow(10,9)+7;
        long long int ans=0;
        int even=0,odd=0;
        long long int sum=0;
        for(int num:arr){
            sum+=num;
            if(sum%2==1){
                ans+=even+1;           // odd sum
                odd++;
            } 
            else{
                ans+=odd;              // even sum
                even++;
            }
        }
        return ans%modulo;
    }
};

// Q:https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/description/
// A:https://www.youtube.com/watch?v=svvIB5pPc2E