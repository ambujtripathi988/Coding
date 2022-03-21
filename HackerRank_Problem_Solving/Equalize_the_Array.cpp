
// https://www.hackerrank.com/challenges/equality-in-a-array/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , count = 0 , deletion = 0 ;

    cin >> n ; 

    int arr[n] ;

    // vector<int> vect ;

    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    for (int i = 0; i < n ; i++)
    {
        count = 0 ; 
        
        for(int j=i ; j < n ; j++)
        {
            if( arr[i] == arr[j] )
            {
                count++ ;
                
                // cout << "Element is : " << arr[i] << "       count is : " << count << endl ;
            }
        }

        // vect.push_back(count) ;
        
        if (count > deletion) 
        {
            deletion = count ;

            // cout << "deletion is : " << deletion << endl ;
        }        
    }

    /*
    
    max = *max_element(vect.begin(), vect.end()) ;

    for (int i = 0; i < n ; i++)
    {
        if ( max == vect[i] )
        {
            index = i ;
        }
    }

    int num = arr[index] ;

    int temp ;

    for (int i = 0; i < n ; i++ )
    {
        if(arr[i] != num)
        {
            temp = arr[i] ;
            
            arr.erase( (arr.begin()+index) ) ;

            deletion ++ ;
        }    
    }
    
    */
    
    deletion = n - deletion ;

    cout << deletion << endl ;
    
    return 0;
}
