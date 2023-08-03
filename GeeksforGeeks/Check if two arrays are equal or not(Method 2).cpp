
// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&curated[]=1&sortBy=submissions

// Method 2 : Using unordered_map 
// Avg Time Complexity : O(N)

//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) 
    {
        //code here
        
        unordered_map<int,int> rep1 ;
        unordered_map<int,int> rep2 ;
        
        for(int i = 0 ; i < N ; i++)
            rep1[A[i]] ++ ;
            
        for(int i = 0 ; i < N ; i++)
            rep2[B[i]] ++ ;

        int count = 0 ;
        
        for(int i = 0 ; i < N ; i++)
            if(rep1[A[i]] == rep2[A[i]]) 
                count ++ ;
            
        if(count == N)
            return true ;
            
        return false ;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
