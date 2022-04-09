
// https://www.hackerrank.com/challenges/alternating-characters/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test ;
    cin >> test ;
    string str ;
    
    for(int i = 0 ; i < test ; i++)
    {
        cin >> str ;
        
        int count = 0 ;

        for(int j = 0 ; j < str.length() ; j++)
        {
            if(str[j] == str[j+1])
            {
                count ++ ;
            }
        }

        cout << count << endl ;
    }

    return 0;
}
