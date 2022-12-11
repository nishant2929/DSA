//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int large = INT_MIN;
	    int ret = INT_MIN;
	    int cnt=0;
	    for(int x =0 ; x<n; x++){
	        if(arr[x]>large){
	            large = arr[x];
	        }
	    }
	    for(int x =0 ; x<n; x++){
	        if(arr[x]>ret && arr[x]<large){
	            ret = arr[x];
	            cnt=1;
	        }     
        }
        if(cnt==1){
            return ret;
        }else{
            return -1;
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends