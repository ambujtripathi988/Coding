
// https://www.hackerrank.com/challenges/append-and-delete/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int operations , count = 0 , l1 , l2 , x , y ;

    string str1 , str2 ;

    cin >> str1 >> str2 >> operations ;

    l1 = str1.size() ;

    l2 = str2.size() ;

    if(l1 >= l2)
    {
        for (int i = 0; i < l2; i++)
        {
            if(str1[i] == str2[i])
            {
                count ++ ;
            }

            else
            {
                break ;
            }
        }
    }

    else
    {
        for (int i = 0; i < l1; i++)
        {
            if(str1[i] == str2[i])
            {
                count ++ ;
            }

            else
            {
                break ;
            }
        }
    }

    x = l1 - count ;

    y = l2 - count ;

    if( ( (x+y) <= operations ) && ( (x+y)%2 <= operations%2) )
    {
        cout << "Yes" << endl ;
    }

    else
    {
        cout << "No" << endl ;
    }

    return 0;
}
