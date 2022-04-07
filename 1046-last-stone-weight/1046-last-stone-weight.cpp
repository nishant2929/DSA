class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
//         int n= stones.size();
        
//         while(n>=2){
//             sort(stones.begin(),stones.end());
//             int l1= stones[n-1];
//             int l2= stones[n-2];
//             if(l1==l2){
//                 stones.pop_back();
//                 stones.pop_back();
//             }else {
//                 stones[n-2]= (l1-l2);
//                 stones.pop_back();
//             }
//         }
//         if(stones.size()==0){
//             return 0;
//         }else{
//             return stones[0];
//         }
        
//     }
         int i=stones.size();
        sort(stones.begin(),stones.end());
        while(i>=2){
            int l1,l2;
            l1=stones[i-1];
            l2=stones[i-2];
            if(l1==l2){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones[i-2]=(l1-l2);
                stones.pop_back();
                
            }
            sort(stones.begin(),stones.end());
            i=stones.size();
        }
        
        if(stones.size()==0)return 0;
        else return stones[0];
        
    }
};