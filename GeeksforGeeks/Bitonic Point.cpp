
// https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=1&category[]=Arrays&curated[]=8&sortBy=difficulty

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    
    int findMaximum(int arr[], int n) 
    {
        int maxi = -2147483647 ;        // min int value 
        
        for(int i = 0 ; i < n ; i++)
        {
            maxi = max(arr[i] , maxi) ;
            
            if(arr[i] > arr[i+1])
                break ;
        }
        
        return maxi ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
