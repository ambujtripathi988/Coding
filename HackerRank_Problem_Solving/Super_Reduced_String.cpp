
// https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string str ;
    
    cin >> str ;

    for(int i = 0 ; i < (((int)str.length())-1) ; i++)
    {
        if(str[i] == str[i+1])
        {
            str.erase(i,2) ;
            
            i = -1 ;
        }
    }


    if(str.length() == 0)
    {
        cout << "Empty String" << endl ;
    }

    else
    {
        cout << str << endl ;
    }
    
    
    return 0;
}
