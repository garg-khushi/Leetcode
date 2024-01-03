class Solution {
public:
    // time/space: O(mn)/O(1)
    int numberOfBeams(vector<string>& bank) {
        int result = 0;
        int prev = 0;
        for (auto& row : bank) {
            // get the number of devices in the current row
            int curr = count(row.begin(), row.end(), '1');
            // skip the row without any devices
            if (curr == 0) continue;
            // update the result and the previous
            result += (prev * curr);
            prev = curr;
        }
        return result;
    }
};