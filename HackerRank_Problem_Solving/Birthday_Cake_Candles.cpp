
// https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ;

    cin >> n ;

    vector<int> arr ;
    
    for (int i = 0; i < n; i++)
    {
        int element ;
        
        cin >> element ;
        
        arr.push_back(element) ;
    }

    sort(arr.begin(),arr.end()) ;

    int max_num = arr[n-1] ;

    int count = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        if(max_num == arr[i])
        {
            count ++ ;
        }
    } 

    cout << count ;

    return 0;
}
