
// https://www.hackerrank.com/challenges/two-strings/problem?h_r=profile

// Method 1 : 

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    int test , flag = 0 ;

    cin >> test ;

    string str1 , str2 ;

    for (int i = 0; i < test ; i++)
    {        
        map<char,int> str_main ;
        
        flag = 0 ;
        
        cin >> str1 >> str2 ;
        
        for(int j = 0 ; j < str1.length() ; j++)
        {
            str_main[str1[j]] = str_main[str1[j]] + 1 ;     
        }

        for(int j = 0 ; j < str2.length() ; j++)
        {
            //cout << str_main[str2[j]] << " " ;
            
            if( (str_main[str2[j]]) > 0 )
            {
                flag = 1 ;
                
                break ;
            } 
            
            else
            {
                continue ;
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
