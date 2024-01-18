#include <unordered_map>

class Solution {
public:
    int climbStairs(int n) {
        std::unordered_map<int, int> memo;
        return climbStairsHelper(n, memo);
    }

private:
    int climbStairsHelper(int n, std::unordered_map<int, int>& memo) {
        if (n == 0 || n == 1) {
            return 1;
        }

        if (memo.find(n) != memo.end()) {
            return memo[n];
        }

        int ways = climbStairsHelper(n - 1, memo) + climbStairsHelper(n - 2, memo);
        memo[n] = ways; // Store the result in the memoization table
        return ways;
    }
};
