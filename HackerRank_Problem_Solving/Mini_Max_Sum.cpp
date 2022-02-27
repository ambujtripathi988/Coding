
// https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> arr;
    
    long int max = 0 , min = 0 ;

    for(int i = 0 ; i < 5 ; i++)
    {
        int element ;
        
        cin >> element ;
        
        arr.push_back(element) ;
    }

    sort(arr.begin(), arr.end()) ;

    for (int i = 5; i > 1; i--)
    {
        max = max + arr[i-1] ;
    }

    for(int i = 0 ; i < 4 ; i++)
    {
        min = min + arr[i] ;
    }

    cout << min << " " << max ;

    return 0 ;
}
