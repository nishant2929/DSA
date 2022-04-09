class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> v(stones.begin(),stones.end());
        while(v.size()>=2){
            int x = v.top() ; v.pop();
            int y= v.top() ; v.pop();
            if(x>y){ v.push(x-y);
                   }
        }
        if(v.empty()) {
            return 0;
        }else{
            return v.top();
        }
    }
};