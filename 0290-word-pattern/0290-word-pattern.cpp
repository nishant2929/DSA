class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        map<char,string> mp;
        set<string> ss;
        int i=0;
        string temp="";
        while(i<s.size()){
            if(s[i]==' '){
                v.push_back(temp);
                temp = "";
                i++;
            }else{
                temp +=s[i];
                i++;
            } 
        }
        v.push_back(temp);
        
        
        if(pattern.size()!= v.size()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i]) !=mp.end()){
                if(mp[pattern[i]]!=v[i]){
                    return false;
                }
            }else{
                if(ss.find(v[i]) != ss.end()){
                    return false;
                }else{
                    mp[pattern[i]] = v[i];
                    ss.insert(v[i]);
                }
            }
        }
        return true;
    }
};