
// https://www.hackerrank.com/challenges/find-digits/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test , digit ;

    cin >> test ;

    long int num , no , count = 0 ;

    for (int i = 0; i < test; i++)
    {
        cin >> num ;

        no = num ;

        count = 0 ;

        while(no > 0)
        {
            digit = no % 10 ;

            no /= 10 ;

            if(digit == 0)
            {
                continue ;
            } 

            else if(num % digit == 0)
            {
                count ++ ;
            }

        }

        cout << count << endl ;
    }

    return 0;
}
