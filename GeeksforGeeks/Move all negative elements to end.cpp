
// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> nega ;
        vector<int> posi ;
        
        int inde = 0 , zero = 0 ;
        
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] < 0)   
                nega.push_back(arr[i]) ;
                
            else if(arr[i] > 0)
                posi.push_back(arr[i]) ;
                
            else
                zero++ ;
        }
        
        for(int i = 0 ; i < posi.size() ; i++)
        {
            arr[inde] = posi[i] ;
            inde ++ ;
        }
        
        while(zero--)
        {
            arr[inde] = 0 ;
            inde ++ ;
        }
        
        for(int i = 0 ; i < nega.size() ; i++)
        {
            arr[inde] = nega[i] ;
            inde ++ ;
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends
