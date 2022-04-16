
// https://www.hackerrank.com/challenges/migratory-birds/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n , ind , element ;

    cin >> n ;

    int arr[n] ;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    int count_arr[5] = {0} ;

    for (int i = 0; i < n; i++)
    {
        ind = arr[i] ;

        count_arr[ind-1] = count_arr[ind-1] +1 ;
    }

    int max = 0 ;
    
    for(int i = 0 ; i < 5 ; i++)
    {
        if(count_arr[i] > max )
        {
            max = count_arr[i] ;
        }
    }
    
    for (int i = 0; i < 5; ++i)
    {
        if(max == count_arr[i])
        {
            cout << (i+1) << endl ;
            break ;
        }
    }

    return 0 ;
}
