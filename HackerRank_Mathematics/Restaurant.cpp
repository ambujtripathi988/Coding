
// https://www.hackerrank.com/challenges/restaurant/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test , length , breadth , sqs , area , count ;
    
    int val1 , val2 ;

    cin >> test ;

    for (int i = 0; i < test; ++i)
    {
        cin >> length >> breadth ;

        area = length * breadth ;

        if(length < breadth)
        {
            for(int j = 1 ; j <= length ; ++j )
            {
                //int n = j * j ;

                if((length%j == 0) && (breadth%j == 0) )
                {
                    val1 = length / j ;
                    val2 = breadth / j ;
                    
                    count = val1 * val2 ;
                }
            }
        }

        else if(breadth < length)
        {
            for(int j = 1 ; j <= breadth ; ++j )
            {
                // int n = j * j ;

                if((length%j == 0) && (breadth%j == 0) )
                {
                    val1 = length / j ;
                    val2 = breadth / j ;
                    
                    count = val1 * val2 ;
                }
            }
        }

        else if(breadth == length)
        {
            /*
            for(int j = 1 ; j < breadth ; ++j )
            {
                int n = j * j ;

                if(area % n == 0 )
                {
                    count = area / n ;
                }
            }
            */
            
            count = 1 ;
        }

        cout << count << endl ;
        
        count = 0 ;

    }

    return 0;
}
