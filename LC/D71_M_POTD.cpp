// 1404.Number of Steps to Reduce a Number in Binary Representation to One
// D71_M_POTD
class Solution {
public:
    int numSteps(string s) {
        int ans=0;
        int carry=0;
        for(int i=s.size()-1;i>0;i--){
            if(s[i]-'0'+carry == 1){
                carry=1;
                ans+=2;
            }else ans++;
        }
        return ans+carry;
    }
};


// Q:https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/?envType=daily-question&envId=2024-05-29
// A:https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/solutions/5224948/easy-code-with-explanation-on-runtime