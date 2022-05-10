
// https://www.hackerrank.com/contests/openbracket-2017/challenges/because-owlery-is-too-lazy/problem

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int flag1 = 0 , flag2 = 0 , flag3 = 0 ;

    string str ;

    string temp = "@hogwarts.com" ;

    getline(cin , str) ;
    
    long int x = str.length() - 13 ;

    for (int i = 0; i < 5 ; i++)
    {
        if( str[i] >= 'a' && str[i] <= 'z')
        {
            continue ;
        }

        else
        {
            flag1 = 1 ;

            break ;
        }
    }
    
    if(str.length() > 18)
    {
        flag3 = 1 ;
    }

    for(int i = 0 ; i < 13 ; i++)
    {
        if(str[i+x] == temp[i])
        {
            continue ;
        }

        else 
        {
            flag2 = 1 ;

            break ;
        }
    }

    if( flag1 == 0 && flag2 == 0 && flag3 == 0 )
    {
        cout << "Yes" << endl ;
    }

    else
    {
        cout << "No" << endl ;
    }
    
    return 0;
}
