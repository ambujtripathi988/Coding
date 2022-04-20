
// https://www.hackerrank.com/challenges/service-lane/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , test , min , r1 , r2 ; 

    cin >> n >> test ;

    int arr[n] ;

    for(int j = 0 ; j < n ; j++)
    {
        cin >> arr[j] ;
    }

    for(int i = 0 ; i < test ; i++)
    {
        cin >> r1 >> r2 ;

        min = 1000 ;

        for(int j = r1 ; j <= r2 ; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j] ;
            }
        }

        cout << min << endl ;
    }
    
    return 0;
}
