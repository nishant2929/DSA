class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int prof=0;
        int diff=0;
        for(int i=0;i<prices.size();i++){
            diff = prices[i] - buy;
            buy= min(buy,prices[i]);
            prof= max(prof,diff);
        }
        return prof;
    }
};