class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int prof = 0;
        int minPrice = INT_MAX;
        for(int i = 0; i < prices.size(); i++)
        {
            minPrice = min(prices[i], minPrice);
            prof = max(prices[i] - minPrice, prof);
        }
        return prof;
    }
};