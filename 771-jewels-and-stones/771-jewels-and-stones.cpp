class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> lol;
        for(int x: jewels){
            lol.insert(x);
        }
        int c=0;
        for(int e:stones){
            if(lol.find(e)!=lol.end()){
                c++;
            }
        }
        return c;
    }
};