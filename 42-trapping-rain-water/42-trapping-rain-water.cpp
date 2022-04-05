class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        vector<int> arr1;
        vector<int> arr2;
      int maxi1=0;
        int sum=0;
        for(int i=0;i<n;i++){
             maxi1=max(h[i],maxi1);
            arr1.push_back(maxi1);
           // cout<<maxi1;
        }
       // cout<<arr1.size();
        
        for(int j=n-1;j>=0;j--){
           int  maxi2=max(h[j],maxi2);
            arr2.push_back(maxi2);
          // cout<<maxi2;
        }
        reverse(arr2.begin(),arr2.end());
       // cout<<arr2.size();
            for(int k=0;k<n;k++){
               // cout<<arr2[k];
                int totalmax=0;
            totalmax = min(arr1[k],arr2[k]) - h[k];
          //cout<<totalmax;
            if(totalmax>0){
                sum+=totalmax;
            }
        }
        return sum;;
    }
};