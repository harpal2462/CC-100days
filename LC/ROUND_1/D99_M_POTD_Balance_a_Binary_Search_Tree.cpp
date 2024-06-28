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
// 1382. D99_M_POTD_Balance_a_Binary_Search_Tree
class Solution {
public:
    vector<TreeNode*>sortedNodes;
    void inorderTraversal(TreeNode* root){
        if(root==nullptr) return;
        inorderTraversal(root->left);
        sortedNodes.push_back(root);
        inorderTraversal(root->right);
    }
    TreeNode* createBalancedBst(vector<TreeNode*>&sortedNodes,int l, int r){
        if(l>r) return nullptr;
        int mid=(l+r)/2;
        TreeNode* node= sortedNodes[mid];
        node->left=createBalancedBst(sortedNodes,l,mid-1);
        node->right=createBalancedBst(sortedNodes,mid+1,r);
        return node;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorderTraversal(root);
        TreeNode* newRoot= createBalancedBst(sortedNodes,0,sortedNodes.size()-1);
        return newRoot;
    }
};
 
// Q:https://leetcode.com/problems/balance-a-binary-search-tree/?envType=daily-question&envId=2024-06-26