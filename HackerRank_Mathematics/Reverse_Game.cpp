
// https://www.hackerrank.com/challenges/reverse-game/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            a[i] = i;
        }
        int i,j,x;
        if(n%2==0)      // if no of elements is even
        {
           i = 0, j = n-1,x=0;
            while(x<n && i<j)
            {
            b[x] = a[j];
            b[x+1] = a[i];
            i++;
            j--;
            x = x+2;
            }
        }
        else        // if no of elements is odd
        {
        i = 0, j = n-1,x=0;
         while(x< n && i<j)
            {
            b[x] = a[j];
            b[x+1] = a[i];
            i++;
            j--;
            x = x+2;
            }
            b[n-1] = a[i];
        }
        for(int i= 0;i<n;i++)
        {
          //cout<<b[i]<<" ";
            
            if(b[i]==k) 
                cout<<i<<endl;
        }
       // cout<<endl;
    }
    return 0;
}
