#include <vector>
#include <cmath>

class Solution {
public:
    int reverse(int x) {
        int maxInt = INT_MAX / 10;
        int minInt = INT_MIN / 10;
        
        int ans = 0;

        while (x) {
            int digit = x % 10;

            if (ans > maxInt || (ans == maxInt && digit > 7)) {
                return 0;  // Overflow, return 0
            }
            if (ans < minInt || (ans == minInt && digit < -8)) {
                return 0;  // Overflow, return 0
            }

            ans = ans * 10 + digit;
            x /= 10;
        }

        return ans;
    }
};
