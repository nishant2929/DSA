//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:


void f(int n,vector<int> arr, int N,int sum,vector<int>&ans){
    
    
    if(n==N){
        
        ans.push_back(sum);
        return;
        
    }
    
   f(n+1,arr,N,sum+arr[n],ans);
   
   f(n+1,arr,N,sum,ans);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
       f(0,arr,N,0,ans);
       //sort(ans.begin(),ans.end());
       return ans;
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends