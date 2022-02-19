
// https://www.hackerrank.com/challenges/diagonal-difference/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , sum_dig_1 = 0 , sum_dig_2 = 0;
    
    cin >> n ;

    int arr[n][n] ;

    for(int i = 0 ; i < n ; i++)            // for taking input of elements
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    for(int i = 0 ; i < n ; i++)            // for sum of dig_1 elements
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i==j)            // primary diagonal elements
            {
                sum_dig_1 += arr[i][j] ;
            }
        }
    }

    for(int i = 0 ; i < n ; i++)            // for sum of dig_2 elements
    {
        for(int j = 0 ; j < n ; j++)
        {
            if((i+j)== (n-1))       // secondary diagonal elements
            {
                sum_dig_2 += arr[i][j] ;
            }
        }
    }

    // cout << "Sum 1 : " << sum_dig_1 << endl << "Sum 2 : " << sum_dig_2 <<endl ; 
    int difference = abs(sum_dig_1 - sum_dig_2) ;

    cout << difference ;

    return 0;
}
