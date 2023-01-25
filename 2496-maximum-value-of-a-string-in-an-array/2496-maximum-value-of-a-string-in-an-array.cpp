class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans=0;
        for(int j=0;j<strs.size();j++){
            bool flag=false;
            //s+=strs[j];
            for(auto i : strs[j]){
                if(i>='a'&& i<='z'){
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                int a= stoi(strs[j]);
                ans= max(ans,a);
            }else{
                int b= strs[j].size();
                ans=max(ans,b);
            }
            //s="";
        }
        return ans;
    }
};