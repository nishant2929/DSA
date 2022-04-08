class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy= prices[0];
        int diff=0;
        for(int i=1;i<prices.size();i++){
            buy= min(buy,prices[i]);
            diff= prices[i]-buy;
            profit= max(profit,diff);
        }
        return profit;
    }
};