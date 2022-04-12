
// https://www.hackerrank.com/challenges/combo-meal/problem

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int test , b , s , c ;

    cin >> test ;

    for (int i = 0; i < test ; i++)
    {
        cin >> b >> s >> c ;

        cout << (b+s)-c << endl ;       // solve three linear equation
    }

    return 0;
}
