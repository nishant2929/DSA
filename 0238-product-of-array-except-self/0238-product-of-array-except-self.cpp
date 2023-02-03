class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long answer = 1;
        int zero = 0;
        vector<int> returning;
        for(auto it : nums){
           if(it==0){
               zero++;
               continue;
           }
           answer=answer*it;
        }
      //  cout<<answer<<" ";
        for(auto it: nums){
            if(zero>=2){
                returning.push_back(0);
            }else{
                if(zero==1){
                   if(it!=0){
                       returning.push_back(0);
                   } else{
                       returning.push_back(answer);
                   }
                }else{
                    returning.push_back(answer/it);
                }
            }
            
        }
        return returning;
    }
};