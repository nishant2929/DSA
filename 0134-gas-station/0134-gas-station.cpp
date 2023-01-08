class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalcost= 0;
        int totalgas=0;
        for(int i=0;i<cost.size();i++){
            totalcost+=cost[i];
            totalgas+=gas[i];
        }
        
        if(totalgas<totalcost){
            return -1;
        }
        
        int start=0;
        int curgas=0;
        
        for(int i=0;i<gas.size();i++){
            if(curgas<0){
                curgas = 0;
                start= i;
            }
            
            curgas+= gas[i]-cost[i];
        }
        return start;
    }
};




// 