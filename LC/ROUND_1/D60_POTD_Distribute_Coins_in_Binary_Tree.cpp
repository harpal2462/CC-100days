// 979. D60_POTD_Distribute_Coins_in_Binary_Tree
class Solution {
public:
    int moves;
    int dfs(TreeNode* curr) {
        if (curr == nullptr) return 0;

        int leftCoins = dfs(curr->left);
        int rightCoins = dfs(curr->right);

        moves += abs(leftCoins) + abs(rightCoins);

        return (curr->val - 1) + leftCoins + rightCoins;
    }
    int distributeCoins(TreeNode* root) {
        moves = 0;
        dfs(root);
        return moves;
    }
};

// Q:https://leetcode.com/problems/distribute-coins-in-binary-tree/?envType=daily-question&envId=2024-05-18