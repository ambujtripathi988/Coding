
// https://www.hackerrank.com/challenges/30-nested-logic/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int d1 , m1 , y1 , d2 , m2 , y2 , fine = 0 ;

    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2 ;

    if (y1 < y2)
    {
        cout << "0" ;
    }

    else if (y1 == y2 )
    {
        if (m1 < m2)
        {
            cout << "0" ;
        }
        
        else if (m1 == m2)
        {
            if(d1 <= d2)
            {
                cout << "0" ;
            }

            else
            {
                fine = ( abs(d1-d2)*15 ) ;

                cout << fine ;
            }
        }

        else
        {
            fine = ( abs(m1-m2)*500 ) ;

            cout << fine ;
        }
    }

    else
    {
        cout << "10000" ;
    }

    return 0 ;
}
