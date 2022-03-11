
// https://www.hackerrank.com/challenges/angry-professor/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int test , n , k , count = 0 ;
    
    cin >> test ;

    for(int j = 0 ; j < test ; j++ )
    {
        
        cin >> n >> k ;

        int arr[n] ;

        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i] ;
        }

        for(int i=0 ; i < n ; i++)
        {
            if(arr[i] <= 0)
            {
                count ++ ;
            }
        }

        if (count >= k)
        {
            cout << "NO" << endl ;
        }

        else 
        {
            cout << "YES" << endl ;
        }
        
        count = 0 ;

    } 
    
    return 0;
}
