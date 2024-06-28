// 826. D91_M_POTD_Most_Profit_Assigning_Work
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size(), m=worker.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++) v.push_back({difficulty[i],profit[i]});
        sort(v.begin(),v.end());
        sort(worker.begin(),worker.end());
        int j=0,sum=0,maxProfit=0;
        for(int i=0;i<m;i++){
            while(j<m && v[j].first<=worker[i]){
                maxProfit=max(maxProfit,v[j].second);
                j++;
            }
            sum+=maxProfit;
        }
        return sum;
    }
};

// Q:https://leetcode.com/problems/most-profit-assigning-work/?envType=daily-question&envId=2024-06-18
// A:https://www.youtube.com/watch?v=V-gYS2b8Ux0