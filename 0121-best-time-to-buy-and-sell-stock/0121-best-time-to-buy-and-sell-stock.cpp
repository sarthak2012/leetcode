class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int currentMin = prices[0];
        for(int i = 1; i < prices.size(); i++) {
            profit = max(prices[i]- currentMin, profit);
            currentMin = min(currentMin, prices[i]);
        }
        return profit;


    }
};