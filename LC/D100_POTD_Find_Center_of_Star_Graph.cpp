// 1791. D100_POTD_Find_Center_of_Star_Graph
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0]==edges[1][0] || edges[0][0]==edges[1][1]){
            return edges[0][0];
        } else return edges[0][1];
    }
};

// Q:https://leetcode.com/problems/find-center-of-star-graph/?envType=daily-question&envId=2024-06-27