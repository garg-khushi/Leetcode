class Solution {
public:
    int countOdds(int low, int high) {
        // Calculate the number of odd numbers from low to high
        return (high + 1) / 2 - low / 2;
    }
};
