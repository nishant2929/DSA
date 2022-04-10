class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        int ans=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int a= v.back();
                v.pop_back();
                int b =v.back();
                v.push_back(a);
                v.push_back(a+b);
            }else if(ops[i]=="C"){
                v.pop_back();
            }else if(ops[i]=="D"){
                int q= v.back();
                v.push_back(2*q);
            }else{
                v.push_back(stoi(ops[i]));
            }
        }
        for(int i=0;i<v.size();i++){
            ans= ans + v[i];
            //cout<<v[i];
        }
    
        return ans;
    }
};