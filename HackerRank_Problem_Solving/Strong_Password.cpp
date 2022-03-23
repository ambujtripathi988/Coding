
// https://www.hackerrank.com/challenges/strong-password/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n , digit = 0  , lower = 0 , upper = 0  , special = 0 ;

    string password ;

    cin >> n >> password ;

    for (int i = 0; i < n; i++)
    {
        if(password[i] >= 'a' && password[i] <= 'z')
        {
            lower = 1 ;
        }

        else if(password[i] >= 'A' && password[i] <= 'Z')
        {
            upper = 1 ;
        }

        else if(password[i] >= '0' && password[i] <= '9')
        {
            digit = 1 ;
        }

        else
        {
            special = 1 ;
        }
    }

    cout << max( (6-n), (4-lower-upper-digit-special) ) ;

    return 0 ;
}
