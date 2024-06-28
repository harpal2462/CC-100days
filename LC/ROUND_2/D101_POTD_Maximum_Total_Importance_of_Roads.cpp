// 2285. D101_POTD_Maximum_Total_Importance_of_Roads
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long int>degree(n,0);
        for(auto edge: roads){
            degree[edge[0]]++;
            degree[edge[1]]++;
        }
        sort(degree.begin(),degree.end());
        long long int importance=1;
        long long int ans=0;
        for(auto neighbor:degree){
            ans+= (neighbor*importance);
            importance++;
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/maximum-total-importance-of-roads/?envType=daily-question&envId=2024-06-28