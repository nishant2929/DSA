class Solution {
public:
    int maxProfit(vector<int>& p) {
        int diff=0;
        int prof=0;
        int buy=p[0];
        for(int i=0;i<p.size();i++){
            diff=p[i]-buy;
            buy=min(buy,p[i]);
            prof=max(prof,diff);
        }
        return prof;
    }
};