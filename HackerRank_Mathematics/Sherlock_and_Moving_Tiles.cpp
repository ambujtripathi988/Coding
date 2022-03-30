
// https://www.hackerrank.com/challenges/sherlock-and-moving-tiles/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    long int l , s1 , s2 , no_of_queries ;

    cin >> l >> s1 >> s2 >> no_of_queries ;

    double area , time ;

    for (int i = 0; i < no_of_queries ; i++)
    {
        cin >> area ;
        
        // for time find relative distance(diagonal) and speed then : time = distance/speed
         
        time = ( (abs(sqrt(area)-l)*(sqrt(2))) / (abs(s1-s2)) ) ;

        cout<< fixed << setprecision(20) << time << endl ;
    }

    return 0;
}
