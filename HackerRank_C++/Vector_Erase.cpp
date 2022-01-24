
// https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=false

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
void display (vector<T> &v)               // passing vector as parameter and taking v as a reference
                                                               // vector<t> is used as a datatype

{
    for (int i=0 ; i < v.size() ; ++i)          // v.size automatically finds the current size of the vector which is passed in the display function as a parameter
    {
        cout << v[i] <<" ";
       //  cout << v.at(i) <<"  ";         // we are using two ways to display elements of vector , this is the reason why elements are printed two times in the output
    }

    // cout << "\n\n" ;
}


int main()
{
    int n , element , single_remove , r1 , r2;
    cin >> n ;

    vector<int> vec ;

    for (int i =0 ; i < n ; i++)
    {
        cin >> element ;
        vec.push_back(element) ;
    }

    cin >> single_remove ;
    vec.erase(vec.begin()+(single_remove-1));

    cin >> r1 >> r2 ;
    vec.erase(vec.begin()+(r1-1),vec.begin()+(r2-1));
    
    cout << vec.size() << endl ;

    display(vec) ;


    return 0;
}
