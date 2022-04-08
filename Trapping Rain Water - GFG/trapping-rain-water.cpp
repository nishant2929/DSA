// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        
        vector<long long> v1;
        vector<long long> v2;
        long long maxi =0;
        long long ans=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
             v1.push_back(maxi);
        }
        int lexi=0;
        for(int j=n-1;j>=0;j--){
            if(arr[j]>lexi){
                lexi=arr[j];
            }
            v2.push_back(lexi);
        }
        
        reverse(v2.begin(),v2.end());
        
        for(int i=0;i<n;i++){
            int mini = min(v1[i],v2[i]);
            int diff= mini- arr[i];
           
                ans= ans+diff;
            
            
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends