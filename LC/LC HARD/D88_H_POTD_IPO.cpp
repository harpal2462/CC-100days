// 502. D88_H_POTD_IPO
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        int n=c.size();
        vector<pair<int,int>>project(n);
        for(int i=0;i<n;i++) project[i]= {c[i],p[i]};
        priority_queue<int>pq;
        sort(project.begin(),project.end());
        int i=0;
        while(k--){
            while(i<n && w>=project[i].first){
                pq.push(project[i].second);
                i++;
            } 
            if(pq.empty()) break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};

// Q:https://leetcode.com/problems/ipo/description/?envType=daily-question&envId=2024-06-15