
// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) 
{
    long long int mini = INT_MAX ;
    long long int maxi = INT_MIN ;
    
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] < mini)
            mini = a[i] ;
            
        if(a[i] > maxi)
            maxi = a[i] ;
    }   
    
    pair<long long, long long> ans;
    
    ans = {mini,maxi} ;
    
    return ans ;
}
