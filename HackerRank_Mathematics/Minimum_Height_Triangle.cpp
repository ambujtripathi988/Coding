
// https://www.hackerrank.com/challenges/lowest-triangle/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double a , b , h ;

    cin >> b >> a ;

    h = (a*2)/b ;
    
    long long int num = ceil(h) ;
    
    cout << num ;
        
    return 0;
}
