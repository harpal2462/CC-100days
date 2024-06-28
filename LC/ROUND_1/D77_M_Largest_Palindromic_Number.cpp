// 2384. D77_M_Largest_Palindromic_Number
class Solution {
public:
    string largestPalindromic(string num) {
        vector<int>freq(10);
        for(char ch: num) freq[ch-'0']++;
        string front="";
        string back="";
        for(int i=9;i>=0;i--){
            if(i==0 && front.empty()) continue; // avoiding leading zero
            while(freq[i]>1){
                front+= (i+'0');
                back+= (i+'0');
                freq[i]-=2;
            }            
        }
            for(int i=9;i>=0;i--){
                if(freq[i]){
                    front+= (i+'0');
                    break;
                }
            }
        reverse(back.begin(),back.end());
        return front +back;
    }
};

// Q:https://leetcode.com/problems/largest-palindromic-number/
// A:https://leetcode.com/problems/largest-palindromic-number/solutions/2460540/c-faster-than-100-solution-with-comments-o-nADD 