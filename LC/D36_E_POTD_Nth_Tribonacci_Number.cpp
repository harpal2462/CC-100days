// 1137. D36_E_POTD_Nth_Tribonacci_Number
class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        int T[n+1];
        T[0]=0;
        T[1]=1;
        T[2]=1;
        for(int i=3;i<=n;i++){
            T[i]=T[i-1]+T[i-2]+T[i-3];
        }
        return T[n];
    }
};


// Q:https://leetcode.com/problems/n-th-tribonacci-number/description/?envType=daily-question&envId=2024-04-24