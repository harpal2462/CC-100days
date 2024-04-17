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
// D29_E_Binary_Tree_Paths 
class Solution {
public:
    void dfs(TreeNode* root, string temp, vector<string> &ans){
        if(root==NULL) return;
        temp+=to_string(root->val);                      // IMP to_string() function           
        if(root->left==NULL && root->right==NULL){
            ans.push_back(temp);
        }
        dfs(root->left,temp+"->",ans);                  // passing "->" with temp
        dfs(root->right,temp+"->",ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        dfs(root,"",ans);
        return ans;
    }
};

// Q:https://leetcode.com/problems/binary-tree-paths/
// A:https://leetcode.com/problems/binary-tree-paths/solutions/4091706/brute-force-to-efficient-method-java-c-python-javascript-c