
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zero = 0 , one = 0 , two = 0 ;
        
        for(int i = 0 ; i < n ; i++)
        {
            if(!a[i])
                zero ++ ;
                
            else if(a[i] == 1)
                one ++ ;
                
            else
                two ++ ;
        }
        
        int i = 0 ;
        
        while(zero--)
        {
            a[i] = 0 ;
            i++ ;
        }
            
        while(one--)
        {
            a[i] = 1 ;
            i++ ;
        }
            
        while(two--)
        {
            a[i] = 2 ;
            i++ ;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
