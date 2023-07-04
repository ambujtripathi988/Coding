
// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) 
    {
        unordered_map<int,int> rep ;    // unordered map has low complexity than ordered
        
        for(int i = 0 ; i < n ; i++)
            rep[arr[i]] = rep[arr[i]] + 1 ;
            
        vector<int> fre ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            if(iter -> second > 1)
                fre.push_back(iter -> first) ;
                
        if( !(fre.size()) )
            fre.push_back(-1) ;
            
        sort(fre.begin() , fre.end()) ;
            
        return fre ;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
