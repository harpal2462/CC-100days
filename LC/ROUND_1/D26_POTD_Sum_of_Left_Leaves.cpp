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
// D26 404. Sum of Left Leaves
class Solution {
public:
    int ans=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root!=NULL){
            if(root->left!= NULL && root->left->left==NULL && root->left->right==NULL){
                ans+=root->left->val;
            }
            sumOfLeftLeaves(root->left);
            sumOfLeftLeaves(root->right);
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/sum-of-left-leaves/description/?envType=daily-question&envId=2024-04-14
// A:https://leetcode.com/problems/sum-of-left-leaves/solutions/1281375/simplest-c-solution-easy-to-understand