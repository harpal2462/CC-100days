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
// D27_POTD_Sum_Root_to_Leaf_Numbers (Medium)
class Solution {
public:
    int temp=0;
    int ans=0;
    int sum(TreeNode* root,int temp) {
        if(root==NULL) return 0;
        temp = temp*10 + root->val;
        if(root->left==NULL && root->right==NULL) return temp;

        return sum(root->left,temp) + sum(root->right,temp);
        
    }

    int sumNumbers(TreeNode* root) {
        return sum(root,0);
    }
};


// Q:https://leetcode.com/problems/sum-root-to-leaf-numbers/?envType=daily-question&envId=2024-04-15
// A:https://leetcode.com/problems/sum-root-to-leaf-numbers/solutions/5024431/faster-lesser-detailed-explaination-dfs-easy-step-by-step-explaination-python-java-c

// My First Solution: 
// class Solution {
// public:
//     int temp=0;
//     int ans=0;
//     int sum(TreeNode* root) {
//         if(root==NULL) return 0;
//         temp = temp*10 +root->val;
//         if(root->left==NULL && root->right==NULL){
//             ans+=temp;
//         }
//         sum(root->left); 
//         sum(root->right); 
//         temp=temp-root->val;
//         temp/=10;

//         return temp;
//     }

//     int sumNumbers(TreeNode* root) {
//         sum(root);
//         return ans;
//     }
// };