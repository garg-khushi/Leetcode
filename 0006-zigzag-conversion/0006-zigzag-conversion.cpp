#include <iostream>
#include <vector>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }

        int n = numRows;
        std::vector<std::string> v(n, ""); 

        for (int i = 0; i < s.length(); i += 2 * n - 2) {
            for (int j = i; j < std::min(i + n, static_cast<int>(s.length())); j++) {
                v[j - i] += s[j];
            }
            for (int j = i + n; j < std::min(i + 2 * n - 2, static_cast<int>(s.length())); j++) {
                v[i + 2 * n - 2 - j] += s[j];
            }
        }

        std::string ans;
        for (int i = 0; i < v.size(); i++) {
            ans += v[i];
        }
        return ans;
    }
};