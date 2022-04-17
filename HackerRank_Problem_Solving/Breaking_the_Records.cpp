
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n , max_score , min_score , min_count = 0 , max_count = 0 ;

    cin >> n ;

    long int scores[n] ;

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i] ;
    }

    min_score = scores[0] ;
    max_score = scores[0] ;

    for (int i = 1; i < n; i++)
    {
        if(min_score > scores[i])
        {
            min_score = scores[i] ;
            min_count ++ ;
        }

        if(max_score < scores[i])
        {
            max_score = scores[i] ;
            max_count ++ ;
        }
    }

    cout << max_count << " " << min_count << endl ;
    
    return 0 ;
}
