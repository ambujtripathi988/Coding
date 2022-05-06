
// https://www.hackerrank.com/challenges/sherlock-and-squares/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int a , b , count = 0 , test ; 
    
    cin >> test ;

    for(int k = 0 ; k < test ; k++)
    {
        cin >> a >> b ;

        count = 0 ;

        int x = 1 ;

        while( (x*x) < a)
        {
            x++ ;
        }

        while( (x*x) <= b)
        {
            count ++ ;

            x++ ;
        }

        cout << count << endl ;

    }

    return 0 ;
}
