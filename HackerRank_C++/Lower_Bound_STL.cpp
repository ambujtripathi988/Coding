
// https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <bits/stdc++.h>        // universal set of all the header files in c++

using namespace std ;

int main ()
{

    int sizee , nquery ;

    // input of size of the array
    cin >> sizee ;

    int arr[sizee] ;

    for (int i = 0 ; i < sizee ; i++ )
    {
        cin >> arr[i] ;
    }
    
    // int *ptr = arr[sizee] ;


    // input of no. of queries 
    cin >> nquery ; 

    int quer[nquery] ;

    for (int i = 0 ; i < nquery ; i++ )
    {
        cin >> quer[i] ;
    }

    for (int i = 0 ; i < nquery ; i++ )
    {
        auto itr = lower_bound(arr , arr+sizee , quer[i] ) - arr ;
        auto itr1 = upper_bound(arr , arr+sizee , quer[i] ) - arr ;

        if ( itr == itr1 )
        {
            cout << "No " << (itr+1) <<endl;
        }

        else 
        {
            cout << "Yes " << (itr +1) << endl;
        }
    }
    
    return 0 ;
}
