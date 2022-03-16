
// https://www.hackerrank.com/challenges/strange-advertising/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n ; 

    int ad = 5 , total_like = 0 , like_instant ;

    cin >> n ;

    for(int i = 1 ; i <= n ; i++)
    {
        like_instant = ad / 2 ;

        total_like += like_instant ; 

        ad = (ad/2)*3 ;
    }

    cout << total_like ;
    
    return 0 ;
}
