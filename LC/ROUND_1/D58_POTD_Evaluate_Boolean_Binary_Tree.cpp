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

// 2331. D58_POTD_Evaluate_Boolean_Binary_Tree
class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if (root->val < 2) return root->val;
        else if( root->val==2) return evaluateTree(root->left)||evaluateTree(root->right);
        return evaluateTree(root->left) && evaluateTree(root->right);
    }
};

// Q:https://leetcode.com/problems/evaluate-boolean-binary-tree/?envType=daily-question&envId=2024-05-16