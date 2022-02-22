
// https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no_of_elements ;
    
    cin >> no_of_elements ;
    
    // int arr[no_of_elements] ;
    
    int sum = 0;
    
    for(int i = 0 ; i < no_of_elements ; i++)
    {
        int element ;
        
        cin >> element ;
        
        sum = sum + element ;
    
    }
    
    cout<< sum << endl ;
} 
