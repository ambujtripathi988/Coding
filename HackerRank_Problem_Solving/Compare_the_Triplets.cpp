
// https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    int a[3] , b[3] ;
    
    int alex = 0 , bob = 0 ;

    for(int i = 0 ; i < 3 ; i++)
    {
        cin >> a[i] ;
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        cin >> b[i] ;
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        if(a[i] > b[i])
        {
            alex ++ ;
        }

        else if(b[i] > a[i])
        {
            bob ++ ;
        }
    }

    cout << alex << " " << bob ;

    return 0;
}
