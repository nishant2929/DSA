class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        vector<int> v;
        int ans = INT_MAX;
        for(int i=0;i<words.size();i++){
        
            if(words[i]==target){
                v.push_back(i);
            }
            
        }
        if(v.size()==0){
            return -1;
        }
        for(int i=0;i<v.size();i++){
            int right = abs(startIndex-v[i]);
            int left = words.size() - right;
            ans = min(ans,min(left,right));
        }
        return ans;
    }
};