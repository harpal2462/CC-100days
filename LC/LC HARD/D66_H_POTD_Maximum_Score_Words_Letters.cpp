// 1255. D66_H_POTD_Maximum_Score_Words_Letters
class Solution {
public:
    int a[26], b[26], ans = 0;
    void solve(int idx, vector<string>& words, vector<int>& score) {
        if (idx == words.size()) {
            int sc = 0;
            for (int i = 0; i < 26; i++) {
                if (b[i] > a[i])return;
                sc += score[i] * b[i];
            }
            ans = max(ans, sc);
            return;
        }
        solve(idx + 1, words, score);
        for (auto i : words[idx]) b[i - 'a']++;
        solve(idx + 1, words, score);
        for (auto i : words[idx]) b[i - 'a']--;
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        for (auto i : letters) a[i - 'a']++;
        solve(0, words, score);
        return ans;
    }
};

// Q:https://leetcode.com/problems/maximum-score-words-formed-by-letters/description/?envType=daily-question&envId=2024-05-24