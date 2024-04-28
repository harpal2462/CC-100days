// 834. D40_H_POTD_Sum_of_Distances_in_Tree  (Actual Hard Question)
class Solution {
public:
    int N;
    vector<vector<int>> gr;
    vector<int> ans, count;
   
    void dfs(int node, int par){
        for(auto child: gr[node]){
            if(child!=par){
                dfs(child,node);
                count[node]+=count[child];
                ans[node]+=ans[child]+ count[child];
            }
        }
    }   
    void dfs2(int node, int par){
        for(auto child:gr[node]){
            if(child!=par){
                ans[child] = ans[node] - count[child] + ( N-count[child] );
                dfs2(child,node);
            }
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        N=n;
        gr=vector<vector<int>>(n);

        for(const auto &edge: edges){
            gr[edge[0]].push_back(edge[1]);
            gr[edge[1]].push_back(edge[0]);
        }
        ans=vector<int>(n,0);
        count=vector<int>(n,1);   
        dfs(0,-1);
        dfs2(0,-1);
        return ans;
    }
};

// Q:https://leetcode.com/problems/sum-of-distances-in-tree/description/?envType=daily-question&envId=2024-04-28
// A:https://www.youtube.com/watch?v=kM3A6AjHvjM