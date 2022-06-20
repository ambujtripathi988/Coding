
// https://www.hackerrank.com/challenges/funny-string/problem?isFullScreen=false

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;

    cin >> n ;

    // string str ;

    while(n--)
    {
        string str ;
        
        cin >> str ;

        int len = str.length() ;

        int ascii[len] ;

        int x = 0 ;

        for(int i = 0 ; i < len ; i++)
        {
            ascii[x] = int(str[i]) ;

            x++ ;
        }

        int ascii_rev[len] ;

        x = 0 ;

        for(int i = len ; i > 0 ; i--)
        {
            ascii_rev[x] = ascii[i-1] ;

            x++ ;
        }        

        x = 0 ;

        int diff[len-1] ;

        for(int i = 0 ; i < len -1 ; i++)
        {
            diff[x] = abs(ascii[i+1] - ascii[i]) ;

            x++ ;
        }

        x = 0 ;

        int diff_rev[len-1] ;

        for(int i = 0 ; i < len -1 ; i++)
        {
            diff_rev[x] = abs(ascii_rev[i+1] - ascii_rev[i]) ;

            x++ ;
        }

        int sum = 0 , sum_rev = 0 ;
        
        int count = 0 ;

        for(int i = 0 ; i < len-1 ; i++)
        {
            // sum += diff[i] ;

            // sum_rev += diff_rev[i] ;
            
            if(diff[i] == diff_rev[i])
            {
                count ++ ;
            }
        }

        if(count == len-1)
        {
            cout << "Funny" << endl ;
        }

        else
        {
            cout << "Not Funny" << endl ;
        }


    }
    
    return 0 ;
}
