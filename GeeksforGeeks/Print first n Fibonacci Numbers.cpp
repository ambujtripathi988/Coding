
// https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1?page=1&category[]=Mathematical&category[]=Strings&curated[]=8&sortBy=submissions

//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long > fib ;
        
        fib.push_back(1) ;
        
        if(n == 1)
            return fib ;
            
        fib.push_back(1) ;
        
        if(n == 2)
            return fib ;
        
        for(int i = 0 ; i < n - 2 ; i++)
        {
            long long int num = fib[fib.size() - 1 ] + fib[fib.size() - 2] ;
            fib.push_back(num) ;
        }
        
        return fib ;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
