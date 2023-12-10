
// https://www.codechef.com/START37D/problems/MANGOES

#include <iostream>
using namespace std;

int main() {
    // your code goes here
    
    int test , x , y , z ;
    
    cin >> test ;
    
    while(test--)
    {
        cin >> x >> y >> z ;
        
        int i = 1 , count = 0 ;
        
        if(x > (z-y) )
        {
            cout << "0" << endl ;
        }
        
        else
        {
            int count = 0 ;
            
            for(int i = 1 ; i < z ; i++)
            {
                if((x*i) <= (z-y))
                {
                    count ++ ;
                }    
            }
            
            cout << count << endl ;
            
        }
        
    }
    
    return 0;
}
