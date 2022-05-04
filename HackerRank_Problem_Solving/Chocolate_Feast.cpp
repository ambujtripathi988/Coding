
// https://www.hackerrank.com/challenges/chocolate-feast/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int test , wrap , amt , cost_choco , wrap_given , choco , choco_wrap ;

    cin >> test ;

    for (int j = 0; j < test; j++)
    {
        cin >> amt >> cost_choco >> wrap_given ;

        choco = amt / cost_choco ;

        wrap = amt / cost_choco ;

        while( wrap >= wrap_given )
        {
            choco_wrap = wrap / wrap_given ;

            choco += choco_wrap ;

            wrap = wrap % wrap_given ;

            wrap += choco_wrap ; 
        }

        cout << choco << endl ;
    }

    return 0 ;
}
