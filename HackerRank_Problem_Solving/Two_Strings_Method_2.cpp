
// https://www.hackerrank.com/challenges/two-strings/problem?h_r=profile

// Method 2 :

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    long int test , flag = 0 ;

    cin >> test ;

    string str1 , str2 ;

    for(int s = 0 ; s < test ; s++)
    {
        flag = 0 ;

        cin >> str1 >> str2 ;

        set<char> st1 ;
        
        flag = 0 ;
        
        for(int i = 0 ; i < str1.length() ; i++)
        {
            st1.insert(str1[i]) ;
        }
        
        for(int i = 0 ; i < str2.length() ; i++)
        {
            if( (st1.find(str2[i])) != st1.end() )
            {
                flag = 1 ;
                break ;
            }
        }
        
        if(flag == 1 )
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
