//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

void f (vector<int>&arr , int n ,vector<int>&temp,int index,vector<int>&ans){
    if(index==n){
        int sum=0;
        for(auto it : temp){
            sum+=it;
        }
        ans.push_back(sum);
        return;
    }
    
    temp.push_back(arr[index]);
    f(arr,n,temp,index+1,ans);
    temp.pop_back();
    
    f(arr,n,temp,index+1,ans);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> temp;
        vector<int>ans;
       f(arr,N,temp,0,ans);
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