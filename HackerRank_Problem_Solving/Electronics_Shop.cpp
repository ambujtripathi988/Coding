
// https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int budget , key_length , drive_length , max =  0 , x ;

    cin >> budget >> key_length >> drive_length ;

    int keyboards[key_length] , drives[drive_length] ;

    for (int i = 0; i < key_length; i++)
    {
        cin >> keyboards[i] ;
    }

    for (int i = 0; i < drive_length; i++)
    {
        cin >> drives[i] ;
    }

    for (int i = 0; i < key_length; i++)
    {
        for (int j = 0; j < drive_length; j++)
        {
            x = keyboards[i] + drives[j] ;

            if( (x > max) && (x <= budget) )
            {
                max = x ;
            }
        }
    }

    if( max == 0 )
    {
        cout << "-1" << endl ;
    }

    else
    {
        cout << max << endl ;
    }

    return 0;
}
