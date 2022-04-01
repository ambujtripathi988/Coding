
// https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int m , n , flag = 0 , temp2 ;

    cin >> m >> n ;

    string element , temp1  ;

    map<string,int> map1 ;
    
    map<string,int> map2 ;

    map<string,int> :: iterator iter ;

    if (m < n)
    {
        cout << "No" ;
    }

    else
    {
        for (int i = 0; i < m ; i++)
        {
            cin >> element ;

            map1[element] = map1[element] + 1 ;
        }

        for (int i = 0; i < n ; i++)
        {
            cin >> element ;

            map2[element] = map2[element] + 1 ;            
        }

        for(iter = map2.begin() ; iter != map2.end() ; iter ++)
        {
            temp1 = (*iter).first ;

            temp2 = map1[temp1] ;

            if( (map2[temp1]) <= temp2 )
            {
                continue ;
            }

            else
            {
                flag = 1 ;
                break ;
            }
        }

        if(flag != 0)
        {
            cout << "No" ;
        }

        else
        {
            cout << "Yes" ;
        }
    }
    
    return 0;
}
