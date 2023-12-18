
// https://www.codechef.com/MAY221D/problems/F1RULE

#include <iostream>
using namespace std;

int main() 
{
    int test ;
    
    cin >> test ;
    
    while(test--)
    {
        float x , y ;
        
        cin >> x >> y ;

        float a = 107 ;

        float b = 100 ;

        float per = (a/b) * x ;

        //cout << per << " ";
        
        if(y <= per)
        {
            cout << "YES" << endl ;
        }
        
        else
        {
            cout << "NO" << endl ;
        }
    }
    
    return 0;
}
