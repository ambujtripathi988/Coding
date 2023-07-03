
// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) 
    {
        vector<int> vect ;
        
        for(int i = 0 ; i < n ; i++)
            vect.push_back(arr[i]) ;
            
        sort(vect.begin() , vect.end()) ;
        
        int mini = vect[0] ;
        int maxi = vect[n-1] ;
        
        int diff = maxi - mini ;
        
        for(int i = 1 ; i < n ; i++)
        {
            if(vect[i] < k)
                continue ;
                
            mini = min(vect[0] + k , vect[i] - k) ;
            
            maxi = max(vect[n-1] - k , vect[i-1] + k) ;
            
            diff = min(diff, maxi-mini) ; 
        }
        
        return diff ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
