
// https://www.hackerrank.com/challenges/bigger-is-greater/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int test ;

    cin >> test ;

    string str ;

    while(test--)
    {
        cin >> str ;

        if( next_permutation(str.begin(), str.end()) )      // next_permutation() : https://www.geeksforgeeks.org/stdnext_permutation-prev_permutation-c/    
        {
            cout << str.c_str() << endl ;                   // c_str() : https://www.geeksforgeeks.org/basic_string-c_str-function-in-c-stl/
        }

        else
        {
            cout << "no answer" << endl ;
        }
    }

    return 0 ;
}
