// D29_POTD_M_Smallest_String_Starting_From_Leaf

class Solution {
public:
    void dfs(TreeNode* root, string temp,string &ans){  // IMP Pass BY reference &ans
        if(root==NULL) return;
        temp=temp+char(root->val+97);
        if(root->left==NULL && root->right==NULL){
            reverse(temp.begin(),temp.end());
            if(ans.empty() || temp<ans){
                ans=temp;
            }
        }
        dfs(root->left,temp,ans);
        dfs(root->right,temp,ans);
    }
    string smallestFromLeaf(TreeNode* root) {
        string ans;
        dfs(root,"",ans);
        return ans;
    }
};


// Q:https://leetcode.com/problems/smallest-string-starting-from-leaf/?envType=daily-question&envId=2024-04-17
// A:https://leetcode.com/problems/smallest-string-starting-from-leaf/solutions/5034697/faster-lesser-detailed-explaination-dfs-step-by-step-explaination-python-java-c