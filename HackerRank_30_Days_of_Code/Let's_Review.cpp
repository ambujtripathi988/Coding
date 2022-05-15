
// https://www.hackerrank.com/challenges/30-review-loop/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n ; 

    cin >> n ;

    string str , even , odd ;

    for (int j = 0; j < n ; j++)
    {
        string str , even , odd ;

        cin >> str ;

        for(int i=0; i < str.size(); i++)
        { 
            if( (i%2) == 0 )
            {
                even += str[i] ;
            }

            else
            {
                odd += str[i] ;
            }
        }
        
        cout << even << " " << odd << endl ;
    }

    return 0 ;
}
