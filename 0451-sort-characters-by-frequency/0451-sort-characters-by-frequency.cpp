class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
       // pair<char,int> p[s.size()];
        priority_queue<pair<int,char>> pp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it: mp){
            pp.push({it.second,it.first});
        }
        s="";
        //pair<char,int> temp;
        while(!pp.empty()){
            s+=string(pp.top().first,pp.top().second);
            pp.pop();
        }
        return s;
    }
};

// class Solution {
// public:
//     string frequencySort(string s) {
//         unor
//     }
// };