
// https://www.hackerrank.com/challenges/counting-valleys/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , sea_level = 0 , valley = 0 ; 

    cin >> n ;

    // char path[n] ;

    char paths ;

    for (int i = 0; i < n; i++)
    {
        // cin >> path[i] ;

        cin >> paths ;

        if(paths=='U')
        {
            if (++sea_level == 0)
            {
                valley ++ ;
            }
        }

        else
        {
            sea_level -- ;
        }

    }

    cout << valley << endl ;
    
    return 0;
}
