/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


// 863. D40_M_All_Nodes_Distance_K_Binary_Tree 
class Solution {
public:
    void dfs(TreeNode* root,int prev, unordered_map<int,vector<int>> &adj){
        if(root==NULL) return;
        if(prev!=-1){
            adj[root->val].push_back(prev);
            adj[prev].push_back(root->val);
        }
        prev=root->val;
        dfs(root->left,prev,adj);
        dfs(root->right,prev,adj);

    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(k==0) return {target->val};
        vector<int> ans;
        unordered_map<int , vector<int>> adj;
        dfs(root,-1,adj);

        unordered_set<int> vis;
        int depth=0;

        queue<int>q;
        q.push(target->val);
        vis.insert(target->val);

        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                int curr=q.front();
                q.pop();
                for(auto nbr : adj[curr]){
                    if(!vis.count(nbr)){
                        vis.insert(nbr);
                        q.push(nbr);
                    }
                }
            }
            depth++;
            if(depth==k){
                while(!q.empty()){
                    ans.push_back(q.front());
                    q.pop();
                }
                break;
            }
        }    
        return ans;    
    }
};

// Q:https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/