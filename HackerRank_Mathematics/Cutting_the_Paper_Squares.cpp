
// https://www.hackerrank.com/challenges/p1-paper-cutting/problem?isFullScreen=false

#include <iostream>
using namespace std ;

int main() 
{
    long int n , m , cuts ;

    cin >> n >> m ;
    
    cuts = (n*m) - 1 ;

    cout << cuts << endl ;

    return 0 ;
}
