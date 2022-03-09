
// https://www.hackerrank.com/challenges/cats-and-a-mouse/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test , cat_a , cat_b , mouse ;
    cin >> test ;

    for (int i = 0; i < test; i++)
    {
        cin >> cat_a >> cat_b >> mouse ;

        if ( abs(cat_a  - mouse) > abs(cat_b  - mouse) )
        {
            cout << "Cat B" << endl ;
        }

        else if ( abs(cat_a  - mouse) < abs(cat_b  - mouse) )
        {
            cout << "Cat A" << endl ;
        }

        else 
        {
            cout << "Mouse C" << endl ;
        }
    }

    return 0;
}
