class Solution {
public:
    int trap(vector<int>& h) {
        vector<int> v1;
        vector<int> v2;
        int maxi =0;
        int ans=0;
        
        for(int i=0;i<h.size();i++){
            if(h[i]>maxi){
                maxi=h[i];
            }
             v1.push_back(maxi);
        }
        int lexi=0;
        for(int j=h.size()-1;j>=0;j--){
            if(h[j]>lexi){
                lexi=h[j];
            }
            v2.push_back(lexi);
        }
        
        reverse(v2.begin(),v2.end());
        
        for(int i=0;i<h.size();i++){
            int mini = min(v1[i],v2[i]);
            int diff= mini- h[i];
           
                ans= ans+diff;
            
            
        }
        return ans;
    }
};