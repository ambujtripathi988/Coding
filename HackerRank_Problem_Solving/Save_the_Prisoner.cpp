
// https://www.hackerrank.com/challenges/save-the-prisoner/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test ; 
    
    long int prisoners , candies , candy_start_from ;

    cin >> test ;

    for (int i = 0; i < test ; i++)
    {
        cin >> prisoners >> candies >> candy_start_from ;
        
        /*
        candy_start_from -- ;
        while(candies--)
        {
            candy_start_from ++ ;

            if (candy_start_from > prisoners)
            {
                candy_start_from = 1 ;
            }

            //cout << "Candy position is : " << candy_start_from << endl ;
        }
        // candy_start_from -- ;
        
        cout << candy_start_from << endl ;  
        
        */
        
        int that_prisoner = (  ( (candy_start_from-1)+(candies-1) ) % prisoners ) + 1 ;    
        
        cout << that_prisoner << endl ; 
    }

    return 0;
}
