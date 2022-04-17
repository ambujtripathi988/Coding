
// https://www.hackerrank.com/challenges/sock-merchant/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n , ind , sum = 0 ;

    cin >> n ;

    int socks[n] ;

    int socks_color[100] = {0} ;

    for (int i = 0; i < n; i++)
    {
        cin >> socks[i] ;
    }

    for (int i = 0; i < n ; i++)
    {
        ind = socks[i] ;

        socks_color[ind-1] ++ ;
    }

    for (int i = 0; i < 100; i++)
    {
        socks_color[i] /= 2 ;
    }

    for (int i = 0; i < 100; i++)
    {
        sum += socks_color[i] ;
    }

    cout << sum ;

    return 0;
}
