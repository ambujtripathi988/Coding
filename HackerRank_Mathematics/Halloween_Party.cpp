
// https://www.hackerrank.com/challenges/halloween-party/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test ;

    cin >> test ;

    for(int i = 0 ; i<test ; i++)
    {
        long int cuts , hori_cuts , verti_cuts , pieces ;
        
        cin >> cuts ;

        if(cuts % 2 == 0 )
        {
            hori_cuts = cuts / 2 ;
            
            verti_cuts = cuts / 2 ; 

            pieces = hori_cuts * verti_cuts ;

            cout << pieces << endl ;
        }

        else 
        {
            hori_cuts = cuts / 2 ;
            
            verti_cuts = cuts / 2 ;
            
            verti_cuts ++ ;

            pieces = hori_cuts * verti_cuts ;
            
            cout << pieces << endl ;
        }
    }

    return 0;
}
