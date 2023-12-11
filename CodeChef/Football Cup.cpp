
// https://www.codechef.com/MAY221D/problems/FOOTCUP

#include <iostream>
using namespace std;

int main() {
    // your code goes here
    
    int test ;
    
    cin >> test ;
    
    while(test--)
    {
        int x , y ;
        
        cin >> x >> y ;
        
        if((x == y) && ((x>=1) && (y>=1)))
        {
            cout << "YES" << endl ;

            // break ;
            
        }
        
        else
        {
            cout << "NO" << endl ;
        }
    }
    
    return 0;
}
