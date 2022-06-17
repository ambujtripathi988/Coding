
// https://www.hackerrank.com/challenges/beautiful-binary-string/problem?isFullScreen=false

// Method 1 :

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , count = 0 ;

    cin >> n ;

    string str ;

    cin >> str ;    

    for(int i = 0 ; i < str.length() ; i++)
    {
        if(str.substr(i,3) == "010")
        { 
            count ++ ;
            
            i += 2 ;
        }
    }

    cout << count << endl ;
    
    return 0;
}
