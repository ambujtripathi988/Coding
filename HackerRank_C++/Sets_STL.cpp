
// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <functional>
#include <algorithm>
using namespace std;

int main() 
{
    
    int nquery , query_type , query ;

    set<int> s ;

    cin >> nquery ;

    for (int i = 0 ; i < nquery ; i++)
    {
        cin >> query_type ;
        

        if ( query_type == 1)
        {
            cin >> query ;
            s.insert(query) ;
        }

        else if ( query_type == 2 )
        {
            cin >> query ;
            s.erase(query) ;
        }

        else if ( query_type == 3 )
        {
            cin >> query ;
            
            set<int>::iterator itr = s.find(query); 

            if (itr == s.end())
            {
                cout << "No"<<endl;
            }

            else
            {
                cout << "Yes"<<endl;
            }
        }
    }
    
    return 0;
}
