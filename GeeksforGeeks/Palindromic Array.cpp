
// https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1?page=1&category[]=Arrays&sortBy=difficulty

//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int palin(int a){

        int t=a;

        int number=0;

        

        while(a!=0){

            int digit=a%10;

            number=number*10+digit;

            a=a/10;

           

        }

        if(t==number){

            return 1;

        }return 0;

    }
    
    int PalinArray(int a[], int n)
    {
        int ans=1;

        for(int i=0;i<n;i++)
        {
            ans=palin(a[i]);
            
            if(ans==0){
                return 0;
            }
        
        }
     
    return 1; 
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        Solution obj;
        cout<<obj.PalinArray(a,n)<<endl;
    }
}
// } Driver Code Ends
