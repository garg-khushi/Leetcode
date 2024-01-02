#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        
        // Initialize vectors for prefix and postfix products
        std::vector<int> pre(n, 1);
        std::vector<int> post(n, 1);
        
        // Calculate prefix products
        for (int i = 1; i < n; ++i) {
            pre[i] = pre[i - 1] * nums[i - 1];
        }
        
        // Calculate postfix products
        for (int i = n - 2; i >= 0; --i) {
            post[i] = post[i + 1] * nums[i + 1];
        }
        
        // Calculate the final result using prefix and postfix products
        std::vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            ans[i] = pre[i] * post[i];
        }
        
        return ans;
    }
};
