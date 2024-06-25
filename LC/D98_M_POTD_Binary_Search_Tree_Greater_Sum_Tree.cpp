/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
// 1038. D98_M_POTD_Binary_Search_Tree_Greater_Sum_Tree 
class Solution {
public:
    int globalSum=0;
    void dfs(TreeNode* root){
        if(root==nullptr) return;
        dfs(root->right);
        globalSum+=root->val;
        root->val=globalSum;
        dfs(root->left);
    }

    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* ans=root;
        dfs(root);
        return ans;
    }
};

// Q:https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/?envType=daily-question&envId=2024-06-25