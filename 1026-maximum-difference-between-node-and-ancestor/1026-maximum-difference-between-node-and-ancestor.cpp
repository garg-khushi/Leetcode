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
class Solution
{
public:
    int ans = 0;
    void func(TreeNode *root, int maxVal, int minVal)
    {
        if (!root)
            return;
        int val1 = max(root->val, maxVal);
        int val2 = min(root->val, minVal);
        ans = max(ans, val1 - val2);
        func(root->left, val1, val2);
        func(root->right, val1, val2);
    }
    int maxAncestorDiff(TreeNode *root)
    {
        func(root, 0, 1e5);
        return ans;
    }
};