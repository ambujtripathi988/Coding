
// https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    long int n , temp ;
    
    cin >> n ;

    string str , key ;
    
    map<string , long> map_posi ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> str ;
        cin >> temp ;

        map_posi.insert({str,temp}) ;
    }

    while(cin >> key)
    {
        if (map_posi.find(key) == map_posi.end())
        {
            cout << "Not found" << endl ;
        }

        else
        {
            cout << key << "=" << map_posi.find(key)->second << endl ;
        }

    }
    
    return 0;
}
