
// https://www.hackerrank.com/challenges/bon-appetit/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , k , anna_bill = 0 , amt_brian ;

    cin >> n >> k ;

    int bill[n] ;

    for (int i = 0; i < n ; i++)
    {
        cin >> bill[i] ;
    }

    cin >> amt_brian ;

    for (int i = 0; i < n ; i++)
    {
        if( i != k)
        {
            anna_bill += bill[i] ;
        }
    }

    anna_bill /= 2 ;

    if (anna_bill == amt_brian)
    {
        cout << "Bon Appetit" ;
    }

    else
    {
        cout << abs(amt_brian - anna_bill) ;
    }

    return 0;
}
