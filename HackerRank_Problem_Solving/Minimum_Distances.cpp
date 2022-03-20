
// https://www.hackerrank.com/challenges/minimum-distances/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ;
    
    cin >> n ;

    int arr[n] ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    map<int , int> map_posi ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i!=j && arr[i] == arr[j])
            {
                map_posi.insert({i,j}) ;
            }
        }
    }

    map<int,int> :: iterator iter ;

    int min ;

    vector<int> vect ;

    if( (map_posi.size()) != 0 )
    {
        for(iter = map_posi.begin() ; iter != map_posi.end() ; iter++)
        {
            min = abs( ((*iter).first) - ((*iter).second) ) ;

            vect.push_back(min) ;

        }

        int min_dist = *min_element(vect.begin(), vect.end()) ;

        cout << min_dist << endl ;

    }

    else
    {
        cout << "-1" << endl ;
    }

    return 0 ;
}
