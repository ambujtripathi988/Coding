
// https://www.hackerrank.com/challenges/designer-pdf-viewer/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int ind , max_height = 0 ;

    int heights[26] = {0} ;

    for(int i = 0 ; i < 26 ; i++)
    {
        cin >> heights[i] ;
    }

    string word ; 

    cin >> word ;

    int x = word.length() ;

    int alpha[x] ;

    for (int i = 0; i < x; i++)
    {
        ind = (int(word[i])) - 97 ;             // changing into ASCII value

        alpha[i] = heights[ind] ;
    }

    for (int i = 0; i < x; i++)
    {
        if(alpha[i] > max_height)
        {
            max_height = alpha[i] ;
        }
    }

    cout << (max_height * x) << endl ;
    
    return 0 ;
}
