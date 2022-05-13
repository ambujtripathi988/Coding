
// https://www.hackerrank.com/challenges/30-operators/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    double meal , tip_price , tip_percent , tax_price , tax_percent ;

    cin >> meal >> tip_percent >> tax_percent ;

    tip_price = ( tip_percent / 100 ) * meal ;

    tax_price = ( tax_percent / 100 ) * meal ;

    meal = meal + tip_price + tax_price ;

    cout << round(meal) << endl ;
    
    return 0 ;
}
