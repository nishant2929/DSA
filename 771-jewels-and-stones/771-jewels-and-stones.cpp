class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> mm;
        for(int x: jewels){
            mm.insert(x);
        }
        int cnt=0;
        for(int y:stones){
            if(mm.find(y)!=mm.end()){
                cnt++;
            }
        }
        return cnt;
    }
};