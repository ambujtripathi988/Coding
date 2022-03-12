
// https://www.hackerrank.com/challenges/utopian-tree/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int test ;
    
    cin >> test ;
    
    for(int i = 0 ; i < test ; i++ )
    {
        int cycles , height = 1 ;

        cin  >> cycles ;

        for(int j = 1 ; j <= cycles ; j++ )
        {
            if (j%2 == 0)
            {
                height += 1 ;
            }

            else 
            {
                height *= 2 ; 
            }
        }

        cout << height << endl ;

        height = 1 ;
        
    } 
        
    return 0;
}
