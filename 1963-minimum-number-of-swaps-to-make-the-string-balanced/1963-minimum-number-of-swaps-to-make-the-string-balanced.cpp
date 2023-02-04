class Solution {
public:
    int minSwaps(string s) {
        int maxo=0;
        int ans=INT_MIN;
        for(auto it : s){
            if(it == ']'){
                maxo+=1;
                ans = max(ans,maxo);
            }else{
                maxo-=1;
            }
        }
     //   cout<<ans<<" ";
        return (ans+1)/2;
    }
};