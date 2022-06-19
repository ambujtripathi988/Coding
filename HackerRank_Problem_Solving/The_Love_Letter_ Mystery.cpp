
// https://www.hackerrank.com/challenges/the-love-letter-mystery/problem?isFullScreen=false

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;

    string str ;
    
    cin >> n ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> str ;

        int sum = 0 ;

        for(int i = 0 ; i < str.length()/2 ; i++)
        {
            // int start = int(str[i]) ;

            // int end = int(str[str.length()-i-1]) ;

            // int diff = abs(start-end) ;

            sum += abs(str[i]-str[str.length()-1-i]) ;
            
        }
        
        cout << sum << endl ;
    }
    
    return 0 ;
}
