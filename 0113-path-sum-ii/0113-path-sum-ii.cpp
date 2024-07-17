#include <vector>
using namespace std;

// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr, right(nullptr)) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    void dfs(TreeNode* root, int target, int curSum, vector<int>& path, vector<vector<int>>& ans) {
        if (root == nullptr) return;

        path.push_back(root->val);
        curSum += root->val;

        if (root->left == nullptr && root->right == nullptr && curSum == target) {
            ans.push_back(path);
        } else {
            dfs(root->left, target, curSum, path, ans);
            dfs(root->right, target, curSum, path, ans);
        }

        path.pop_back(); // backtrack to explore other paths
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(root, targetSum, 0, path, ans);
        return ans;
    }
};
