
// https://www.hackerrank.com/challenges/staircase/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ;

    cin >> n ;
    
    char str1 = ' ' ;
    
    char str2 = '#' ; 
    
    for(int i=0 ; i < n ; i++)
    {        
        cout << string((n -(i+1)),str1) << string((i+1),str2) << endl ;
    }

    return 0;
}
