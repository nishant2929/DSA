class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int prof=0;
    //     int diff=0;
    //     int buy=INT_MAX;
    //     int sell=0;
    //     int newprof=0;
    //     for(int i=0;i<prices.size();i++){
    //         diff=prices[i]-buy;
    //         buy= min(prices[i],buy);
    //         prof = max(buy,prof);
    //     if(newprof<prof){
    //         newprof=
    //     }
    //     }
        int prof=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]){
                prof = prof+ (prices[i+1]-prices[i]);
            }
        }
    return prof;
    
    }
};//5 , 7, 12