
// https://www.hackerrank.com/challenges/harry-potter-and-the-floating-rocks/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

/*
int gcd(int a, int b)
{
    if(a == 0 || b == 0)
        return (a + b);
    else
        return gcd(min(a, b), max(a, b)%min(a, b));
}
*/

int main() 
{
    int test ;

    cin >> test ;

    for(int i = 0 ; i<test ; i++)
    {
        long int x1 , y1 , x2 , y2 , points ;

        cin >> x1 >> y1 >> x2 >> y2 ;

        long int x , y ;

        x = abs(x2-x1) ;
        y = abs(y2-y1) ;

        points = __gcd(y,x) ;           // __gcd() is inbuit function in C++
        points -- ;
        
        /*
        
        if (points <= 0)
        {
            points = 1 ;
            cout << points << endl ;
        }
        
        else 
        {
            if(x==y)
            {
                points -- ;

                cout << points << endl ;
            }

            else
            {
                cout << points << endl ;
            }
        }
        
        */
        
        cout << points << endl ;
    }

    return 0;
}
