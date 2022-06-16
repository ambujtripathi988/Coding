
// https://www.hackerrank.com/challenges/pangrams/problem?isFullScreen=false

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string str ;

    getline(cin , str) ;

    int arr[26] = {0} ;

    int sum = 0 ;

    for(int i = 0 ; i < str.length() ; i++)
    {
        int ascii = int(str[i]) ;
        
        if(ascii >= 65 && ascii <= 91)
        {
            int x = ascii ;
            
            x = x - 65 ;
            
            arr[x] = 1 ;                
        }
        
        else if(ascii >= 97 && ascii <= 123)
        {
            int x = ascii ;
            
            x = x - 97 ;
            
            arr[x] = 1 ;                
        }
    }

    for(int i = 0 ; i < 26 ; i++)
    {
        sum = sum + arr[i] ;
    }

    if(sum >=26)
        cout << "pangram" << endl ;

    else
        cout << "not pangram" << endl ;
    
    return 0 ;
}
