
// https://www.hackerrank.com/challenges/cut-the-sticks/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , element , min ;

    cin >> n ;

    vector<int> arr , arr2 ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> element ;
        arr.push_back(element) ;
    }

    cout << n << endl ;

    int max = *max_element(arr.begin(), arr.end()) ;

    while(min < max)
    {
        min = *min_element(arr.begin(), arr.end()) ;

        for (int i = 0; i < arr.size() ; i++)
        {
            if(arr[i] > min)
            {
                arr2.push_back(arr[i]) ;
            }
        }
        
        arr.clear() ;

        for(int i = 0; i < arr2.size() ; i++)
        {
            arr.push_back(arr2[i]) ;
        }
        
        arr2.clear() ;

        if(arr.size() > 0)
        {
            cout << arr.size() << endl ;
        }

    }    

    return 0;
}
