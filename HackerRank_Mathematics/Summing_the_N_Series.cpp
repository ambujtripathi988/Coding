
// https://www.hackerrank.com/challenges/summing-the-n-series/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test  ;

    long long int n,result ;

    cin >> test ;

    for( int i = 0 ; i < test ; i++ )
    {
        cin >> n ;

        // result = (n/2)*( 2*n - 1 ) ;
        
        //result = n*n ;
        
        long long int temp = 1000000007; 
        
        result = ((n%temp)*(n%temp))%temp;
        
        // long long int temp = (pow(10,9)+7);
        
        result = result % temp ;
        
        // result ++ ;
        
        cout << result << endl ;
        
        result = 0 ;
    }

    return 0;
}
