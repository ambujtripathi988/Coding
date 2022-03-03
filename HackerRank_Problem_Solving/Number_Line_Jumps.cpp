
// https://www.hackerrank.com/challenges/kangaroo/problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x1 , v1 , x2 , v2 ;

    cin >> x1 >> v1 >> x2 >> v2 ;

    /*
    if (x1 < x2)
    {
        if (v1<v2)
        {
            cout << "NO" << endl ;
        }

        else if (v1 > v2)
        {
            cout << "YES" << endl ;
        }

        else 
        {
            cout << "NO" << endl ;
        }
    }

    else if (x1>x2)
    {
        if (v1 > v2)
        {
            cout << "NO" << endl ;   
        }

        else if(v2 > v1)
        {
            cout << "YES" << endl ;
        }

        else
        {
            cout << "NO" << endl ;
        }
    }

    else
    {
        if (v1 == v2)
        {
            cout << "YES" << endl ;
        }

        else
        {
            cout << "NO" << endl ;
        }
    }
    
    */
    
    if(((x2-x1)*(v2-v1))<0 && ((x2-x1)%(v2-v1)) == 0 )
    {
        cout << "YES" << endl ;
    }
    
    else 
    {
        cout << "NO" << endl ;
    }

    return 0;
}
