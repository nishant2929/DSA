class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int buy=prices[0];
        int  profit = 0;
        for(int i=0;i<prices.size();i++){
            buy= min(prices[i],buy);
            profit= max((prices[i]-buy),profit);
        }
        return profit;
    }
};