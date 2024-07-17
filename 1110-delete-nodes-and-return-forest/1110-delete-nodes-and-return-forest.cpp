#include <vector>
#include <algorithm>
using namespace std;

// Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> ans;
        postorder(root, ans, to_delete, true);
        return ans;
    }

private:
    TreeNode* postorder(TreeNode* node, vector<TreeNode*>& ans, vector<int>& to_delete, bool isRoot) {
        if (node == nullptr) {
            return nullptr;
        }

        bool toBeDeleted = find(to_delete.begin(), to_delete.end(), node->val) != to_delete.end();
        if (isRoot && !toBeDeleted) {
            ans.push_back(node);
        }

        node->left = postorder(node->left, ans, to_delete, toBeDeleted);
        node->right = postorder(node->right, ans, to_delete, toBeDeleted);

        return toBeDeleted ? nullptr : node;
    }
};
