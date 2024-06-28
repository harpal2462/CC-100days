// 857. D53_H_POTD_Minimum_Cost_to_Hire_K_Workers
class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n=quality.size();
        vector<pair<double,int>> ratio;          // (wage/quality, quality)
        for(int i=0;i<n;i++){
            ratio.push_back( { (double)wage[i]/quality[i], quality[i] } );
        }
        sort(ratio.begin(),ratio.end());
        priority_queue<int> pq;
        double ans= numeric_limits<double>::max(); // max double value
        int qSum=0;
        for(int i=0;i<n;i++){
            qSum+=ratio[i].second;
            pq.push(ratio[i].second);
            if(pq.size()>k){
                qSum-=pq.top();
                pq.pop();
            }
            if(pq.size()==k) ans=min(ans,ratio[i].first * qSum);
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/minimum-cost-to-hire-k-workers/description/?envType=daily-question&envId=2024-05-11

// A:https://leetcode.com/problems/minimum-cost-to-hire-k-workers/solutions/5142402/i-write-what-you-feel-hindi-explanation-c-solution