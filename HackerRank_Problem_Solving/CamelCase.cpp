
// https://www.hackerrank.com/challenges/camelcase/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    string str ;

    int count = 1 ;

    cin >> str ;

    for(int i = 0 ; i < str.size() ; i++)
    {
        if(isupper(str[i]))
        {
            count ++ ;
        }
    }

    cout << count << endl ;
    
    return 0;
}
