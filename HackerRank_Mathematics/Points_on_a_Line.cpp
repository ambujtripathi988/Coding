
// https://www.hackerrank.com/challenges/points-on-a-line/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int xi , yi ; 

    set<int> x_coord ;
    set<int> y_coord ;
    
    int n ;
    cin >> n ; 

    for(int i = 0 ; i < n ; i++)
    {        
        cin >> xi >> yi ;

        x_coord.insert(xi) ;
        y_coord.insert(yi) ;
    }

    if(x_coord.size() == 1 || y_coord.size() == 1)
    {
        cout << "YES" ;
    }

    else
    {
        cout << "NO" ;
    }

    return 0 ;
}
