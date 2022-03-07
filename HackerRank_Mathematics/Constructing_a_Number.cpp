
// https://www.hackerrank.com/challenges/constructing-a-number/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test ;
    
    cin >> test ;

    for (int i = 0; i < test; i++)
    {
        int n , remainder_sum = 0 ;
        cin >> n ;
        int arr[n] ;
        int temp ;

        for(int j = 0 ; j < n ; j++)
        {
            cin >> temp ;

            temp %= 3 ;

            remainder_sum += temp ;
         //   cout << "Remainder sum : " << remainder_sum << endl ;
        }

        // cout << "Remainder sum final : " << remainder_sum << endl ;

        if (remainder_sum%3==0)
        {
            cout << "Yes" << endl ;
        }

        else
        {
            cout << "No" << endl ;
        }

    }


    return 0;
}
