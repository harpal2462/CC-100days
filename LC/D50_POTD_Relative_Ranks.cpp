// 506. D50_POTD_Relative_Ranks

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int>temp(score);
        vector<string>ans;
        unordered_map<int,string>mp;
        for(int i=0;i<n;i++){
            mp[score[i]]=i+1+'0';
        }
        sort(temp.begin(),temp.end());
        for(int i=n-1;i>=0;i--){
            if(i==n-1) mp[temp[i]]="Gold Medal";
            if(i==n-2) mp[temp[i]]="Silver Medal";
            if(i==n-3) mp[temp[i]]="Bronze Medal";
            if(i<n-3) mp[temp[i]]= to_string(n-i);
        }
        for (int s : score) {
            ans.push_back(mp[s]);
        }
        return ans;
    }
};

// Q: https://leetcode.com/problems/relative-ranks/description/?envType=daily-question&envId=2024-05-08