
// https://www.hackerrank.com/challenges/maximum-draws/problem?isFullScreen=true


#include <iostream>
using namespace std;

int main() 
{
    int test , no;

    cin >> test ;
    int arr[test];
    for(int i=0 ; i < test ; i++)
    {
        cin >> no ;
        no ++;
        arr [i] = no ;
    }
    
    for(int i=0 ; i < test ; i++)
    {
        cout << arr[i] << endl ;
    }

    
    return 0;
}
