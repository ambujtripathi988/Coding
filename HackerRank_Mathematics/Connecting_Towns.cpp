
// https://www.hackerrank.com/challenges/connecting-towns/problem?isFullScreen=false

#include <iostream>
using namespace std;

int main() 
{
    int test_outer ,test_inner , path = 1 ;
    
    cin >> test_outer ;
    //int arr1[test_outer];

    for(int i = 0 ; i < test_outer ; i++ )
    {
        cin >> test_inner ;

        int arr[test_inner] ;
        
        for(int j = 0 ; j < (test_inner-1) ; j++ )
        {
            cin >> arr[j] ;
        }

        for(int k = 0 ; k < (test_inner-1) ; k++ )
        {
            path = ( path * arr[k] ) % 1234567;
        }        
        cout << path << endl ;
        //arr1[i] = path;
        path = 1 ;

    }
    
    /*
    for(int i = 1 ; i <= test_outer ; i++ )
    {
        cout << arr1[i] << endl ;
    }
    */

    return 0;
}
