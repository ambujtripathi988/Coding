
// https://www.hackerrank.com/challenges/mark-and-toys/problem?h_l=interview&isFullScreen=false&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=sorting

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , k , temp , toys = 0 ;

    cin >> n >> k ;

    int prices[n] ;

    for (int i = 0; i < n ; i++)
    {
        cin >> prices[i] ;
    }

    // bubble sorting : complexity is -> N^2
    /*
    for(int j = 0 ; j < n ; j++ )
    {
        for (int i = 0; i < (n-j-1) ; i++)
        {
            if(prices[i] > prices[i+1])
            {
                temp = prices[i] ;

                prices[i] = prices[i+1] ;

                prices[i+1] = temp ;
            }
        }

    }
    */
    
    int x = sizeof(prices) / sizeof(prices[0]) ;
    
    sort(prices , prices + n ) ;        // comlexity is : N log(n)

    int s = 0 , cost = 0 ;

    while(cost < k)
    {
        cost += prices[s] ;
        
        if(cost < k)
        {
            toys ++ ;
        }

        s++ ;
        
    }

    cout << toys ;

    return 0;
}
