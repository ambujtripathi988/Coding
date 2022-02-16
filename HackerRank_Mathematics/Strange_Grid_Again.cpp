
// https://www.hackerrank.com/challenges/strange-grid/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long int row ;
    int column , element ;

    cin >> row >> column ;
    
    /*

    if(row % 2 != 0)            // for odd rows
    {
        element = (row/2)*10 + ((2*column)-2) ;
    }

    else                        // for even rows
    {
        element = ((row/2)-1)*10 + ((2*column)-1) ;
    }

    cout << element ;
    
    */
    
    cout << (row-1)/2*10+2*(column-1)+(row-1)%2 ;


    return 0;
}
