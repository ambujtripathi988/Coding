
// https://www.hackerrank.com/challenges/repeated-string/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // list<string> str ;
    
    long long int n , count ;

    string str , temp ;

    cin >> str ; 
    
    cin >> n ;

    long long int x ; 

    if(str.length()==1 && str[0] == 'a')
    {
        cout << n ;
    }

    else
    {        
        for (int i = 0; i < str.length() ; i++)
        {
            if(str[i] == 'a')
            {
                count ++ ;
            }
        }

        count = count* ( n / str.length() ) ;

        for(int i = 0 ; i < (n % str.length()) ; i++)
        {
            if(str[i] == 'a')
            {
                count++ ;
            }
        }

        cout << count ;
        
    }

    return 0 ;
}
