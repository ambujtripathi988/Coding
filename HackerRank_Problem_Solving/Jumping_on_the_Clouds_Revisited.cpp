
// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , k , i , energy = 100 ; 

    cin >> n >> k ;

    int arr[n] ;

    for(int j = 0 ; j < n ; j++)
    {
        cin >> arr[j] ;
    }

    i = k % n ;         // first jump
    
    energy -- ;
    
    if(arr[i] == 1)
    {
        energy -= 2 ;
    }
    
    while(i != 0)
    {
        i = (i+k) % n ;
        
        energy -- ;

        if(arr[i] == 1)
        {
            energy -= 2 ;
        }
    }

    cout << energy ;

    return 0;
}
