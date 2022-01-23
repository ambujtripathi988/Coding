
// https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=false

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
    int n , element;
    cin >> n ;

    vector<int> vec ;

    for (int i =0 ; i < n ; i++)
    {
        cin >> element ;
        vec.push_back(element) ;
    }

    sort(vec.begin(),vec.end());			// sorting the elements of the vector in ascending order

    display(vec) ;
  
    return 0;
}
