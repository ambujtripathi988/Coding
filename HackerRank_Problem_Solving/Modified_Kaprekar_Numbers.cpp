
// https://www.hackerrank.com/challenges/kaprekar-numbers/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long int p , q , i1 , count = 0 , l , r , temp_count = 0 ;

    cin >> p >> q ;

    for(long int i = p ; i <= q ; i++)
    {
        long int num = i*i ;

        i1 = i ;
        
        count = 0 ;

        while(i1 > 0)
        {
            i1 /= 10 ;

            ++ count  ;         // pre increment by 1 so that pow() function can use count variable with proper value
        }

        // cout << "count is : " << count << endl ;

        long int x = (pow(10,count)) ;
        
        r = num %  x ;

        l = num / x ;

        if((l+r) == i)
        {
            cout << i << " " ;

            temp_count ++ ;
        }  


    }

    if(temp_count == 0)
    {
        cout << "INVALID RANGE" ;
    }


    return 0;
}
