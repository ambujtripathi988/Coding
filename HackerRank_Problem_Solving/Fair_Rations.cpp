
// https://www.hackerrank.com/challenges/fair-rations/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , count = 0 ; 

    cin >> n ;

    int arr[n] ;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    for(int i = 0; i < (n-1); i++)
    {
        if((arr[i]%2) == 1)
        {
            ++ arr[i] ;
            ++ arr[i+1] ;

            count = count + 2 ;
        }
    }

    if((arr[n-1]%2) == 1)
    {
        cout << "NO" ;
    }

    else
    {
        cout << count ;
    }
    
    return 0;
}
