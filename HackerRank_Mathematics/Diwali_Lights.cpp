
// https://www.hackerrank.com/challenges/diwali-lights/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int test  ;
    int num ;
    int patterns = 1 ;

    cin >> test ;

    for (int i = 0; i < test; ++i)
    {
        cin >> num ;
        
        for(int j =0; j < num ; j++)
        {
            patterns = patterns * 2 ;
            
            patterns = patterns % 100000 ;
        }
        
        cout << (patterns-1) << endl ;
        
        patterns = 1 ;

    }

    return 0;
}
