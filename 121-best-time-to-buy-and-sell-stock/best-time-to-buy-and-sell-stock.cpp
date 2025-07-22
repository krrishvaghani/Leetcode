class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];  // Buy at the lowest price seen so far
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;  // Sell today for best profit so far
            }
        }

        return maxProfit;
    }
};
