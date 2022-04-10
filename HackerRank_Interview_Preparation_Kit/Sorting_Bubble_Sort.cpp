
// https://www.hackerrank.com/challenges/ctci-bubble-sort/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ;

    cin >> n ;

    int arr[n] ;

    int temp , counter = 1  , swaps = 0 ;

    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    for(int j = 0 ; j < n ; j++)
    {
        for (int i = 0; i < (n-j-1) ; i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i] ;

                arr[i] = arr[i+1] ;

                arr[i+1] = temp ;

                swaps ++ ;
            }
        }
    }

    cout << "Array is sorted in " << swaps << " swaps." << endl ;

    cout << "First Element: " << arr[0] << endl ;

    cout << "Last Element: " << arr[n-1] << endl ;

    return 0;
}
