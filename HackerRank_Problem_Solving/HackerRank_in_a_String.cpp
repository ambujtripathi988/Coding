
// https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem?isFullScreen=false

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int queries ;
    
    cin >> queries ;

    while(queries --)
    {
        string str ;

        cin >> str ;

        string st = "hackerrank" ;

        bool count = false ;

        int l = 0 ;

        for(int i = 0 ; i < str.length() ; i++)
        {
            if(str[i] == st[l])
            {
                if(l == 8)
                {
                    count = true ;
                }

                else
                {
                    l ++ ;
                }
            }
        }

        if(count)
        {
            cout << "YES" << endl ;
        }

        else
        {
            cout << "NO" << endl ;
        }
    }

    
    return 0 ;
}
