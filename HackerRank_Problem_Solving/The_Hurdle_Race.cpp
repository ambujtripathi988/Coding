
// https://www.hackerrank.com/challenges/the-hurdle-race/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , k , element ;

    cin >> n >> k ;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++ )
    {
        cin >> element ;

        arr.push_back(element) ;
    } 

    int x = *max_element(arr.begin() , arr.end()) ;

    int dose = x - k ;
    
    if (dose < 0) 
    {
        cout << "0" ;
    }
    else
    {
        cout << x-k << endl ;
    }

    return 0;
}
