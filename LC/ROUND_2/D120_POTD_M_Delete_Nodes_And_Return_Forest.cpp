/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

// 1110. D120_POTD_M_Delete_Nodes_And_Return_Forest
class Solution {
public:
    TreeNode* postOrder(TreeNode* root, unordered_set<int>& deleteSet, vector<TreeNode*>& ans) {
        if (!root) return nullptr;
        root->left = postOrder(root->left, deleteSet, ans);
        root->right = postOrder(root->right, deleteSet, ans);
        if (deleteSet.count(root->val)) {
            if (root->left) ans.push_back(root->left);
            if (root->right) ans.push_back(root->right);
            delete root;
            return nullptr;
        }
        return root;
    }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> deleteSet(to_delete.begin(), to_delete.end());
        vector<TreeNode*> ans;
        root = postOrder(root, deleteSet, ans);
        if (root) ans.push_back(root);
        return ans;
    }
};

// Q:https://leetcode.com/problems/delete-nodes-and-return-forest/?envType=daily-question&envId=2024-07-17