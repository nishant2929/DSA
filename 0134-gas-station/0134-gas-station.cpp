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
        int curFuel=0;
        int startIndex=0;
        
        for(int i=0;i<gas.size();i++){
            if(curFuel < 0){
                curFuel = 0;
                startIndex = i;
            }

            curFuel += (gas[i]-cost[i]);
        }
        return startIndex;
        
    }
};




// 