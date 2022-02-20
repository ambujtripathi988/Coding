
// https://www.hackerrank.com/challenges/a-very-big-sum/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int n ;

    cin >> n ;

    long int arr[n] ;
    long sum = 0 ;
    
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    for (int i = 0 ;  i < n ; i++)
    {
        sum = sum + arr[i] ;
    }

    cout << sum ;

    return 0;
}
