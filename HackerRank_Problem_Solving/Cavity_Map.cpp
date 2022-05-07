
// https://www.hackerrank.com/challenges/cavity-map/problem?isFullScreen=false

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int i,j,n;

    cin >> n ;
    
    char a[n+2][n+2] ;
    char b[n+2][n+2] ;

    for(i=0; i<n; i++)
    {
        cin >> a[i] ;
    }

    for(i=0; i<n ;i++)
    {
        for(j=0; j<n; j++)
        {
            if( i > 0 && i < n-1 && j > 0 && j < n-1)
            {
                char ch = a[i][j];

                if(ch > a[i+1][j] && ch > a[i][j+1] && ch > a[i-1][j] && ch > a[i][j-1])
                    b[i][j] = 'X';
                
                else
                    b[i][j] = a[i][j];
            }

            else
                b[i][j] = a[i][j];
        }

        b[i][j] = 0;
    }

    for(i=0;i<n;i++)
    {
        cout << b[i] << endl ;
    }

    return 0 ;
}
