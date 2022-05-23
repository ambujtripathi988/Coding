
// https://www.hackerrank.com/challenges/30-binary-numbers/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int n , temp , count = 1 , max = 1 ;

    cin >> n ;

    vector<int> binary ;

    while(n > 0)
    {
        temp = n % 2 ;

        n = n / 2 ;

        binary.push_back(temp) ;
    }    

    reverse(binary.begin(), binary.end()) ;

    for (int i = 0; i < binary.size(); i++)
    {
        if(binary[i] == 1 && binary[i+1] == 1)
        {
            ++ count ;

            if(count > max)
            {
                max = count ;
            }
        }

        else 
        {
            count = 1 ;
        }


    }

    cout << max ;

    return 0 ;
}
