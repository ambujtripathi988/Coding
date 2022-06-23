
// https://www.hackerrank.com/challenges/game-of-thrones/problem?isFullScreen=false

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int count = 0  , flag = 0 ;

    string str ;

    cin >> str ;

    int len = str.length() ;

    int arr[26] = {0} ;

    for(int i = 0 ; i < len ; i++)
    {
        arr[str[i] - 'a'] ++ ;
    }

    for(int i = 0 ; i < 26 ; i++)
    {
        if(arr[i]%2 == 1 && count == 1)           
        {
            cout << "NO" ;
            
            flag = 1 ;
            
            break ;
        }

        if(arr[i]%2 == 1)                        
        {
            count ++ ;
        }
    }

    if(flag == 0)
    {
        cout << "YES" ;
    }

    return 0 ;
}
