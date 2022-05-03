
// https://www.hackerrank.com/challenges/anagram/problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test , ind , sum , str_lng , half_len ;

    cin >> test ;

    string str ;

    for (int j = 0; j < test; j++)
    {
        cin >> str ;
        
        int arr1[26] = {0} ;

        str_lng = str.length() ;

        half_len = str_lng / 2 ;

        if( (str_lng % 2) != 0 )
        {
            cout << "-1" << endl ;

            continue ;
        }

        else
        {
            sum = 0 ;

            for (int i = 0; i < half_len; i++)
            {
                ind = int(str[i]) - 97 ;                // changing into ASCII value

                arr1[ind] ++ ;
            }

            for (int i = half_len; i < str_lng; i++)
            {
                ind = int(str[i]) - 97 ;

                arr1[ind] -- ;
            }

            for (int i = 0; i < 26 ; i++)
            {
                if(arr1[i] > 0)
                {
                    sum += arr1[i] ;
                }
            }

            cout << sum << endl ;
        }
    }

    return 0;
}
