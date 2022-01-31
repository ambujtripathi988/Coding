
// https://www.hackerrank.com/challenges/handshake/problem?isFullScreen=false

#include <iostream>
using namespace std;

int main() 
{ 
    int test , n , hand ;

    cin >> test ;
    
    int arr[test] ;

    for(int i=0 ; i < test ; i++)
    {
        cin >> n ;
        
        hand = ((n*(n-1))/2 );

        arr[i] = hand ; 
    }

    for(int i=0 ; i < test ; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}
