
// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n , count = 0 , i = 0 ;

    cin >> n ;

    int arr[n] ;

    for(int j = 0 ; j < n ; j++)
    {
        cin >> arr[j] ;
    }
            
    while(i<(n-1))
    {
        if(arr[i+2] == 0)
        {
            count ++ ;
            i += 2 ;
        }

        else if(arr[i+1] == 0)
        {
            count ++ ;
            i++ ;
        }
    }
            
    cout << count ;

    return 0 ;
}
