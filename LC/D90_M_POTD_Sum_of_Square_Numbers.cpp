// 633. D90_M_POTD_Sum_of_Square_Numbers
class Solution {
public:
    bool judgeSquareSum(int c) {
        int n=sqrt(c);
        long long int i=0,j=n;
        while(i<=j){
            long long int req= (i*i)+(j*j);
            if( req==c) return true;
            else if(req<c) i++;
            else j--;
        }
        return false;
    }
};

// Q:https://leetcode.com/problems/sum-of-square-numbers/?envType=daily-question&envId=2024-06-17