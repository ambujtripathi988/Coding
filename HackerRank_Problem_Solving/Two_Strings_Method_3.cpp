
// https://www.hackerrank.com/challenges/two-strings/problem?h_r=profile

// Method 3 : 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long int test , flag = 0 ;

    cin >> test ;

    string str1 , str2 ;

    // char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;

    for(int s = 0 ; s < test ; s++)
    {
        flag = 0 ;

        cin >> str1 >> str2 ;

        set<char> st1 ;
        set<char> st2 ;

        set<char> :: iterator iter1 ;
        set<char> :: iterator iter2 ;
        
        flag = 0 ;
        
        for(int i = 0 ; i < str1.length() ; i++)
        {
            st1.insert(str1[i]) ;
        }
        
        for(int i = 0 ; i < str2.length() ; i++)
        {
            st2.insert(str2[i]) ;
        }
        
        for(iter1 = st1.begin() ; iter1 != st1.end() ; iter1 ++ )
        {
            for(iter2 = st2.begin() ; iter2 != st2.end() ; iter2 ++ )
            {
                if((*iter1) == (*iter2))
                {
                    flag = 1 ;
                    break ;
                }
            }

            if(flag == 1)
            {
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
