//  D28_POTD_Medium_Add_One_Row_to_Tree.cpp 

class Solution {
public:
    TreeNode* add(TreeNode* root, int val, int depth, int curr){
        if(root==NULL) return nullptr;
        if(curr== depth-1){

            TreeNode* temp1= root->left;
            TreeNode* temp2= root->right;

            TreeNode* Lroot= new TreeNode(val);
            TreeNode* Rroot= new TreeNode(val);
            
            root->left=Lroot;
            root->right=Rroot;

            Lroot->left=temp1;
            Rroot->right=temp2;

            return root;

        }
        root->left= add(root->left,val,depth,curr+1);    //  return add(root->left...) Incorrect
        root->right= add(root->right,val,depth,curr+1);  //  return add(root->right...) Incorrect
        return root;
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* Newnode= new TreeNode(val);
            Newnode->left=root;
            return Newnode;
        }
        add(root,val,depth,1);
        return root;
    }
};

// Q:https://leetcode.com/problems/add-one-row-to-tree/?envType=daily-question&envId=2024-04-16
// A:https://leetcode.com/problems/add-one-row-to-tree/solutions/5029902/faster-lesser-detailed-explaination-dfs-step-by-step-explaination-python-java