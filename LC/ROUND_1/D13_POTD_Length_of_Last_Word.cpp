// 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int j=s.length()-1;
        int len=0;
        while(j>=0 && s[j]==' ') j--;  // j>=0 must be check first before s[j] 
        while(j>=0 && s[j]!=' '){      // otherwise Runtime error
            len++;                     // Unsigned offset error will occur
            j--;
        }
        return len;
    }
};

// Q; https://leetcode.com/problems/length-of-last-word/?envType=daily-question&envId=2024-04-01