
// https://www.hackerrank.com/challenges/halloween-sale/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int p , d , min_value , wallet , cost = 0  , count = 0 ;

    cin >> p >> d >> min_value >> wallet ;
    
    /*
    if(wallet >= p) 
    {
        
        cost = p ;
        count ++ ;
        
            while( cost < wallet )
            {                

                if( p > min_value )
                {
                    p -= d ;

                    cost += p ;
                    
                    if(cost <= wallet)
                    {
                        count++ ;
                    }
                    
                    //cout << "count value is : " << count << "       cost value is : " << cost << endl ;
                }

                else
                {
                    cost += min_value ;

                    if(cost <= wallet)
                    {
                        count++ ;
                    }


                    //cout << "count value is : " << count << "       cost value is : " << cost << endl ;
                }

            }

        cout << count << endl ;

        // cost = 0 ; count = 0 ;

    }
    
    else
    {
        cout << "0" << endl ;
    }
    */
    
    while(wallet >= p)
    {
        count ++ ;
        wallet = wallet - p ;
        p = ((p-d)>min_value ? (p-d) : min_value)  ;
    }
    
    cout << count ;
    
    return 0;
}
