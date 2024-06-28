// 409. D77_E_POTD_Longest_Palindrome
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        int oddCount=0;
        for(auto c:s){
            m[c]++;
            if(m[c]%2==1) oddCount++;
            else oddCount--;
        }
        if(oddCount>0) return s.size()-oddCount+1;
        return s.size();
    }
};

// Q:https://leetcode.com/problems/longest-palindrome/description/?envType=daily-question&envId=2024-06-04