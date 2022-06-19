
// https://www.hackerrank.com/challenges/beautiful-binary-string/problem?isFullScreen=false

// Method 2 :

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , count = 0 ;

    cin >> n ;

    string str ;

    cin >> str ;    

    for(int i = 2 ; i < n ; i++)
    {
        // Both if statements are equivalent

        /*

        if(str[i] == '0' && str[i-1] == '1' && str[i-2] == '0')
        {
            count ++ ;
            
            i += 2 ;                     
        }

        */      

        if(str[i] == '0')
        {
            if(str[i-1] == '1')
            {
                if(str[i-2] == '0')
                {
                    count ++ ;
                    
                    i += 2 ;
                }
            }
        }
    }

    cout << count << endl ;
    
    return 0;
}
