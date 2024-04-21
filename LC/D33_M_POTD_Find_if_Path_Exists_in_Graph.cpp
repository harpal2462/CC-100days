// 1971. D33_M_POTD_Find_if_Path_Exists_in_Graph
class Solution {
public:
    bool dfs(unordered_map<int,vector<int>> &graph, int curr, int dest,unordered_set<int>&vis){
        if(curr==dest) return true;
        vis.insert(curr);
        for(int child: graph[curr] ){
            if(vis.find(child)==vis.end()){
                if(dfs(graph,child,dest,vis)) return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       unordered_map<int,vector<int>> graph;
       for(const auto &edge:edges){
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
       }
       unordered_set<int>vis;
       return dfs(graph,source,destination,vis);
    }
};


//Q: https://leetcode.com/problems/find-if-path-exists-in-graph/0
//A: https://leetcode.com/problems/find-if-path-exists-in-graph/solutions/5052207/faster-lesser-4-methods-detailed-approach-dfs-bfs-dsu-std-algorithm-python-java-c