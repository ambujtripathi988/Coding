
// https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=false

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int s,t,a,b,m,n , count_apples = 0 , count_oranges = 0 ;

    cin >> s >> t >> a >> b >> m >> n ;

    int apples[m] , oranges[n] ;

    for (int i = 0; i < m; i++)
    {
        cin >> apples[i] ;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> oranges[i] ;
    }

    for(int i = 0; i < m; i++)
    {
        apples[i] = apples[i] + a ;

        if(apples[i] >= s && apples[i] <= t)
        {
            count_apples ++ ;
        }
    }

    for (int i = 0; i < n; i++)
    {
        oranges[i] = oranges[i] + b ;

        if(oranges[i] >= s && oranges[i] <= t)
        {
            count_oranges ++ ;
        }
    }

    cout << count_apples << endl << count_oranges ;

    return 0;
}
