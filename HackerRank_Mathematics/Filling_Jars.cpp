
// https://www.hackerrank.com/challenges/filling-jars/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , m , a , b , k ;
    
    long int sum = 0 , avg = 0 ;

    cin >> n >> m ;
    
    for(int j = 0 ; j < m ; j++)
    {
        cin >> a >> b >> k ;

        for (int i = a ; i <= b ; i++ )
        {
            sum += k ;
        }
    }
    
    avg = sum / n ;

    cout << avg << endl ;

    return 0;
}
