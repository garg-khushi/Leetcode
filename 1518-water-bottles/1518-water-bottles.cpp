class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink = 0;
        int emptyBottles = 0;

        while (numBottles > 0 || emptyBottles >= numExchange) {
            // Drink all available bottles
            drink += numBottles;
            // Update empty bottles count
            emptyBottles += numBottles;
            // Exchange empty bottles for full ones
            numBottles = emptyBottles / numExchange;
            // Remaining empty bottles after exchange
            emptyBottles %= numExchange;
        }

        return drink;
    }
};
