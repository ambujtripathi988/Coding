
// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i , j , k , rev = 0 , digit , count = 0 ;

    cin >> i >> j >> k ;

    for(int s = i ; s <= j ; s++)
    {
        int s1 = s ; 
        do
         {
            digit = s1 % 10;
            
            rev = (rev * 10) + digit;
            
            s1 = s1 / 10;

         } while (s1 != 0);

        int x = abs(s-rev) ;

        if(x%k == 0)
        {
            count ++ ;
        }

        rev = 0 ;
    }

    cout << count ;

    
    return 0;
}
