// 2220. D41_E_Minimum_Bit_Flips_Convert_Number 
// see simliar question
class Solution {
public:
    int minBitFlips(int start, int goal) {
        unsigned int temp= start^ goal;
        // O(1) return __buitin_popcount(temp) Built in function to calculate set bits

        unsigned int count=0;
        while(temp){
            count+=temp&1;
            temp>>=1;
        }
        return count;   // O(log(n))
    }
};

// Q:https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/