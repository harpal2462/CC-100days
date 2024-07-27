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
// 2196. D118_POTD_M_Create_Binary_Tree_From_Descriptions
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> m;
        unordered_set<int> children;

        for (auto node : descriptions) {
            int parentVal = node[0];
            int childVal = node[1];
            int isLeft = node[2];

            if (m[parentVal] == 0) m[parentVal] = new TreeNode(parentVal);
            if (m[childVal] == 0) m[childVal] = new TreeNode(childVal);

            if (isLeft) m[parentVal]->left = m[childVal];
            else m[parentVal]->right = m[childVal];

            children.insert(childVal);
        }

        for (auto it : m) {
            int nodeVal = it.first;
            auto node = it.second;
            if (children.find(nodeVal) == children.end()) return node;
        }

        return nullptr;
    }
};

// Q:https://leetcode.com/problems/create-binary-tree-from-descriptions/?envType=daily-question&envId=2024-07-15