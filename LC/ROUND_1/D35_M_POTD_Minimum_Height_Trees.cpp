// 310. D35_M_POTD_Minimum_Height_Trees  (Nice Question on BFS / A graph can have at most 2 MHT)

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return vector<int>{0};
        vector<int> ans;
        vector<vector<int>> graph(n);   // dont forget to specify size
        vector<int> degree(n,0);

        for(auto &e: edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
            degree[e[0]]++;
            degree[e[1]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(degree[i]==1) q.push(i), degree[i]--;
        }
        while(!q.empty()){
            int sz=q.size();
            ans.clear();
            for(int i=0;i<sz;i++){
                int curr=q.front(); q.pop();
                ans.push_back(curr);                           // dont forget ans.push_back(curr)
                for(auto child: graph[curr]){
                    degree[child]--;
                    if(degree[child]==1) q.push(child);       // push on queue not ans
                }
            }
        }
        return ans;
    }
};


// Q:https://leetcode.com/problems/minimum-height-trees/?envType=daily-question&envId=2024-04-23
// A:https://leetcode.com/problems/minimum-height-trees/solutions/1630778/c-simple-solution-topological-sort-w-explanation