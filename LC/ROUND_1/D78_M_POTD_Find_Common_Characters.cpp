// 1002. D78_M_POTD_Find_Common_Characters
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        vector<int>minfreq(26,INT_MAX);
        
        for(auto word:words){
            vector<int>freq(26,0);
            for(auto c:word) freq[c-'a']++;
            for(int i=0;i<26;i++) minfreq[i]=min(minfreq[i],freq[i]);
        }
        for(int i=0;i<26;i++){
            while(minfreq[i]--) ans.push_back(string(1,i+'a'));
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/find-common-characters/?envType=daily-question&envId=2024-06-05