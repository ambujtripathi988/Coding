
// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int n , negatives = 0 , zeros = 0 , positives = 0 ;

    cin >> n ;

    int arr[n] ;
    
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    for (int i = 0 ;  i < n ; i++)
    {
        if(arr[i] < 0 )
        {
            negatives ++ ;
        }

        else if(arr[i] > 0)
        {
            positives ++ ;
        }

        else
        {
            zeros ++ ;
        }
    }

    double z_ratio = zeros / (n*1.0) ;
    double n_ratio = negatives / (n*1.0) ;
    double p_ratio = positives / (n*1.0) ;
    cout << fixed << setprecision(6) << p_ratio << endl ;
    cout << fixed << setprecision(6) << n_ratio << endl ;
    cout << fixed << setprecision(6) << z_ratio << endl ;

    return 0;
}
