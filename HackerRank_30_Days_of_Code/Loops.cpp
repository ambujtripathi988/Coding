
// https://www.hackerrank.com/challenges/30-loops/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n ; 

    cin >> n ;

    for (int i = 0; i < 10; i++)
    {
        cout << n << " x " << (i+1) << " = " << n*(i+1) << endl ;
    }

    return 0 ;
}
