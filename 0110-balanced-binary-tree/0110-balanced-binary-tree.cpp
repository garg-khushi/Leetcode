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
class Solution {
public:
    int dfsheight(TreeNode *root){
        if(root==NULL ) return 0;
        int lh=dfsheight(root->left);
        if(lh==-1) return -1;
        int rh=dfsheight(root->right);
        if(rh==-1) return -1;
        
        if(abs(lh-rh)>1) return -1;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(dfsheight(root)==-1)
            return 0;
        else return 1;
    }
};
// class solution {
// public:
// int dfsHeight (TreeNode *root) {
//         if (root == NULL) return 0;
        
//         int leftHeight = dfsHeight (root -> left);
//         if (leftHeight == -1) return -1;
//         int rightHeight = dfsHeight (root -> right);
//         if (rightHeight == -1) return -1;
        
//         if (abs(leftHeight - rightHeight) > 1)  return -1;
//         return max (leftHeight, rightHeight) + 1;
//     }
//     bool isBalanced(TreeNode *root) {
//         return dfsHeight (root) != -1;
//     }
// };